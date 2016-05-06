// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "RedisProxyService.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using boost::shared_ptr;

class RedisProxyServiceHandler : virtual public RedisProxyServiceIf {
 public:
  RedisProxyServiceHandler() {
    // Your initialization goes here
  }

  void getUser(User& _return, const int64_t id) {
    // Your implementation goes here
    printf("getUser\n");
  }

  int64_t addUser(const User& user) {
    // Your implementation goes here
    printf("addUser\n");
  }

  void getAllUser(std::vector<User> & _return) {
    // Your implementation goes here
    printf("getAllUser\n");
  }

  int64_t addWord(const Word& word) {
    // Your implementation goes here
    printf("addWord\n");
  }

  void getWord(Word& _return, const int64_t id) {
    // Your implementation goes here
    printf("getWord\n");
  }

  void getAllWord(std::vector<Word> & _return) {
    // Your implementation goes here
    printf("getAllWord\n");
  }

  void userBuyWord(const int64_t userId, const int64_t wordId) {
    // Your implementation goes here
    printf("userBuyWord\n");
  }

  void getChargeUsers(std::vector<User> & _return, const Word& word) {
    // Your implementation goes here
    printf("getChargeUsers\n");
  }

  void getAllToken(std::vector<Token> & _return) {
    // Your implementation goes here
    printf("getAllToken\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  shared_ptr<RedisProxyServiceHandler> handler(new RedisProxyServiceHandler());
  shared_ptr<TProcessor> processor(new RedisProxyServiceProcessor(handler));
  shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

