#ifndef REDIS_H_
#define REDIS_H_

#include <iostream>
#include <string.h>
#include <string>
#include <stdio.h>
#include <list>

#include <hiredis/hiredis.h>

class Redis {
public:

	Redis() {
	}

	~Redis() {
		this->_connect = NULL;
		this->_reply = NULL;
	}

	bool connect(std::string host, int port) {
		this->_connect = redisConnect(host.c_str(), port);
		if (this->_connect != NULL && this->_connect->err) {
			printf("connect error: %s\n", this->_connect->errstr);
			return 0;
		}
		return 1;
	}

	char * get(std::string key) {
		this->_reply = (redisReply*) redisCommand(this->_connect, "GET %s",
				key.c_str());

		//		if (NULL == this->_reply->str) {
		//			return "";
		//		} else {
		//			std::string str = this->_reply->str;
		//			freeReplyObject(this->_reply);
		//			return str;
		//		}

		return this->_reply->str;
	}

	void set(std::string key, std::string value) {
		redisCommand(this->_connect, "SET %s %s", key.c_str(), value.c_str());
	}

	std::list<std::string> getPrefixKey(std::string prefix) {
		std::list<std::string> list;
		this->_reply = (redisReply*) redisCommand(this->_connect, "KEYS %s",
				(prefix + "*").c_str());
		if (this->_reply->type == REDIS_REPLY_ARRAY) {
			for (unsigned int i = 0; i < this->_reply->elements; ++i) {
				redisReply* childReply = this->_reply->element[i];
				if (childReply->type == REDIS_REPLY_STRING) {
					list.push_back(childReply->str);
//					printf("The value is %s.\n", childReply->str);
				}
			}
		}
		return list;
	}

	void cleanAllKey() {
		this->_reply = (redisReply*) redisCommand(this->_connect, "flushall");
	}
private:
	redisContext* _connect;
	redisReply* _reply;

};

#endif /* REDIS_H_ */
