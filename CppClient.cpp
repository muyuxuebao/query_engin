/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements. See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership. The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied. See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#include <iostream>
#include <sstream>

#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/transport/TSocket.h>
#include <thrift/transport/TTransportUtils.h>

#include "RedisProxyService.h"
#include "Redis.h"

using namespace std;
using namespace apache::thrift;
using namespace apache::thrift::protocol;
using namespace apache::thrift::transport;

int main() {
	boost::shared_ptr<TTransport> socket(new TSocket("localhost", 9090));
	boost::shared_ptr<TTransport> transport(new TBufferedTransport(socket));
	boost::shared_ptr<TProtocol> protocol(new TBinaryProtocol(transport));
	RedisProxyServiceClient client(protocol);

	try {
		transport->open();

		User user;
		user.name = "wangermazi";
		Word word;
		word.name = "ABCD";
		user.id = client.addUser(user);
		word.id = client.addWord(word);
		client.userBuyWord(user.id, word.id);

		User user1;
		user1.name = "zhangsan";
		Word word1;
		word1.name = "BCDE";
		user1.id = client.addUser(user1);
		word1.id = client.addWord(word1);
		client.userBuyWord(user1.id, word.id);

		User user2;
		user2.name = "lisi";
		user2.id = client.addUser(user2);
		client.userBuyWord(user.id, word1.id);

		User user3;
		user3.name = "wangwu";
		user3.id = client.addUser(user3);
		client.userBuyWord(user3.id, word1.id);

		User user4;
		user4.name = "xxx";
		user4.id = client.addUser(user4);
		client.userBuyWord(user4.id, word.id);

		std::vector<User> userVector;
		Word word_cu;
		word_cu.name = "ABCD";
		client.getChargeUsers(userVector, word_cu);

		printf("charge users:\n");
		for (unsigned int i = 0; i < userVector.size(); i++) {
			printf("%ld, %s\n", userVector[i].id, userVector[i].name.c_str());
		}

		transport->close();
	} catch (TException& tx) {
		cout << "ERROR: " << tx.what() << endl;
	}

	return 0;
}

