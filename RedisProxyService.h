/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef RedisProxyService_H
#define RedisProxyService_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "query_engin_types.h"



#ifdef _WIN32
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class RedisProxyServiceIf {
 public:
  virtual ~RedisProxyServiceIf() {}
  virtual void getUser(User& _return, const int64_t id) = 0;
  virtual int64_t addUser(const User& user) = 0;
  virtual void getAllUser(std::vector<User> & _return) = 0;
  virtual int64_t addWord(const Word& word) = 0;
  virtual void getWord(Word& _return, const int64_t id) = 0;
  virtual void getAllWord(std::vector<Word> & _return) = 0;
  virtual void userBuyWord(const int64_t userId, const int64_t wordId) = 0;
  virtual void getChargeUsers(std::vector<User> & _return, const Word& word) = 0;
  virtual void getAllToken(std::vector<Token> & _return) = 0;
};

class RedisProxyServiceIfFactory {
 public:
  typedef RedisProxyServiceIf Handler;

  virtual ~RedisProxyServiceIfFactory() {}

  virtual RedisProxyServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(RedisProxyServiceIf* /* handler */) = 0;
};

class RedisProxyServiceIfSingletonFactory : virtual public RedisProxyServiceIfFactory {
 public:
  RedisProxyServiceIfSingletonFactory(const boost::shared_ptr<RedisProxyServiceIf>& iface) : iface_(iface) {}
  virtual ~RedisProxyServiceIfSingletonFactory() {}

  virtual RedisProxyServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(RedisProxyServiceIf* /* handler */) {}

 protected:
  boost::shared_ptr<RedisProxyServiceIf> iface_;
};

class RedisProxyServiceNull : virtual public RedisProxyServiceIf {
 public:
  virtual ~RedisProxyServiceNull() {}
  void getUser(User& /* _return */, const int64_t /* id */) {
    return;
  }
  int64_t addUser(const User& /* user */) {
    int64_t _return = 0;
    return _return;
  }
  void getAllUser(std::vector<User> & /* _return */) {
    return;
  }
  int64_t addWord(const Word& /* word */) {
    int64_t _return = 0;
    return _return;
  }
  void getWord(Word& /* _return */, const int64_t /* id */) {
    return;
  }
  void getAllWord(std::vector<Word> & /* _return */) {
    return;
  }
  void userBuyWord(const int64_t /* userId */, const int64_t /* wordId */) {
    return;
  }
  void getChargeUsers(std::vector<User> & /* _return */, const Word& /* word */) {
    return;
  }
  void getAllToken(std::vector<Token> & /* _return */) {
    return;
  }
};

typedef struct _RedisProxyService_getUser_args__isset {
  _RedisProxyService_getUser_args__isset() : id(false) {}
  bool id :1;
} _RedisProxyService_getUser_args__isset;

class RedisProxyService_getUser_args {
 public:

  RedisProxyService_getUser_args(const RedisProxyService_getUser_args&);
  RedisProxyService_getUser_args& operator=(const RedisProxyService_getUser_args&);
  RedisProxyService_getUser_args() : id(0) {
  }

  virtual ~RedisProxyService_getUser_args() throw();
  int64_t id;

  _RedisProxyService_getUser_args__isset __isset;

  void __set_id(const int64_t val);

  bool operator == (const RedisProxyService_getUser_args & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    return true;
  }
  bool operator != (const RedisProxyService_getUser_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RedisProxyService_getUser_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class RedisProxyService_getUser_pargs {
 public:


  virtual ~RedisProxyService_getUser_pargs() throw();
  const int64_t* id;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RedisProxyService_getUser_result__isset {
  _RedisProxyService_getUser_result__isset() : success(false) {}
  bool success :1;
} _RedisProxyService_getUser_result__isset;

class RedisProxyService_getUser_result {
 public:

  RedisProxyService_getUser_result(const RedisProxyService_getUser_result&);
  RedisProxyService_getUser_result& operator=(const RedisProxyService_getUser_result&);
  RedisProxyService_getUser_result() {
  }

  virtual ~RedisProxyService_getUser_result() throw();
  User success;

  _RedisProxyService_getUser_result__isset __isset;

  void __set_success(const User& val);

  bool operator == (const RedisProxyService_getUser_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const RedisProxyService_getUser_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RedisProxyService_getUser_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RedisProxyService_getUser_presult__isset {
  _RedisProxyService_getUser_presult__isset() : success(false) {}
  bool success :1;
} _RedisProxyService_getUser_presult__isset;

class RedisProxyService_getUser_presult {
 public:


  virtual ~RedisProxyService_getUser_presult() throw();
  User* success;

  _RedisProxyService_getUser_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _RedisProxyService_addUser_args__isset {
  _RedisProxyService_addUser_args__isset() : user(false) {}
  bool user :1;
} _RedisProxyService_addUser_args__isset;

class RedisProxyService_addUser_args {
 public:

  RedisProxyService_addUser_args(const RedisProxyService_addUser_args&);
  RedisProxyService_addUser_args& operator=(const RedisProxyService_addUser_args&);
  RedisProxyService_addUser_args() {
  }

  virtual ~RedisProxyService_addUser_args() throw();
  User user;

  _RedisProxyService_addUser_args__isset __isset;

  void __set_user(const User& val);

  bool operator == (const RedisProxyService_addUser_args & rhs) const
  {
    if (!(user == rhs.user))
      return false;
    return true;
  }
  bool operator != (const RedisProxyService_addUser_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RedisProxyService_addUser_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class RedisProxyService_addUser_pargs {
 public:


  virtual ~RedisProxyService_addUser_pargs() throw();
  const User* user;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RedisProxyService_addUser_result__isset {
  _RedisProxyService_addUser_result__isset() : success(false) {}
  bool success :1;
} _RedisProxyService_addUser_result__isset;

class RedisProxyService_addUser_result {
 public:

  RedisProxyService_addUser_result(const RedisProxyService_addUser_result&);
  RedisProxyService_addUser_result& operator=(const RedisProxyService_addUser_result&);
  RedisProxyService_addUser_result() : success(0) {
  }

  virtual ~RedisProxyService_addUser_result() throw();
  int64_t success;

  _RedisProxyService_addUser_result__isset __isset;

  void __set_success(const int64_t val);

  bool operator == (const RedisProxyService_addUser_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const RedisProxyService_addUser_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RedisProxyService_addUser_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RedisProxyService_addUser_presult__isset {
  _RedisProxyService_addUser_presult__isset() : success(false) {}
  bool success :1;
} _RedisProxyService_addUser_presult__isset;

class RedisProxyService_addUser_presult {
 public:


  virtual ~RedisProxyService_addUser_presult() throw();
  int64_t* success;

  _RedisProxyService_addUser_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class RedisProxyService_getAllUser_args {
 public:

  RedisProxyService_getAllUser_args(const RedisProxyService_getAllUser_args&);
  RedisProxyService_getAllUser_args& operator=(const RedisProxyService_getAllUser_args&);
  RedisProxyService_getAllUser_args() {
  }

  virtual ~RedisProxyService_getAllUser_args() throw();

  bool operator == (const RedisProxyService_getAllUser_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const RedisProxyService_getAllUser_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RedisProxyService_getAllUser_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class RedisProxyService_getAllUser_pargs {
 public:


  virtual ~RedisProxyService_getAllUser_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RedisProxyService_getAllUser_result__isset {
  _RedisProxyService_getAllUser_result__isset() : success(false) {}
  bool success :1;
} _RedisProxyService_getAllUser_result__isset;

class RedisProxyService_getAllUser_result {
 public:

  RedisProxyService_getAllUser_result(const RedisProxyService_getAllUser_result&);
  RedisProxyService_getAllUser_result& operator=(const RedisProxyService_getAllUser_result&);
  RedisProxyService_getAllUser_result() {
  }

  virtual ~RedisProxyService_getAllUser_result() throw();
  std::vector<User>  success;

  _RedisProxyService_getAllUser_result__isset __isset;

  void __set_success(const std::vector<User> & val);

  bool operator == (const RedisProxyService_getAllUser_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const RedisProxyService_getAllUser_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RedisProxyService_getAllUser_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RedisProxyService_getAllUser_presult__isset {
  _RedisProxyService_getAllUser_presult__isset() : success(false) {}
  bool success :1;
} _RedisProxyService_getAllUser_presult__isset;

class RedisProxyService_getAllUser_presult {
 public:


  virtual ~RedisProxyService_getAllUser_presult() throw();
  std::vector<User> * success;

  _RedisProxyService_getAllUser_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _RedisProxyService_addWord_args__isset {
  _RedisProxyService_addWord_args__isset() : word(false) {}
  bool word :1;
} _RedisProxyService_addWord_args__isset;

class RedisProxyService_addWord_args {
 public:

  RedisProxyService_addWord_args(const RedisProxyService_addWord_args&);
  RedisProxyService_addWord_args& operator=(const RedisProxyService_addWord_args&);
  RedisProxyService_addWord_args() {
  }

  virtual ~RedisProxyService_addWord_args() throw();
  Word word;

  _RedisProxyService_addWord_args__isset __isset;

  void __set_word(const Word& val);

  bool operator == (const RedisProxyService_addWord_args & rhs) const
  {
    if (!(word == rhs.word))
      return false;
    return true;
  }
  bool operator != (const RedisProxyService_addWord_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RedisProxyService_addWord_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class RedisProxyService_addWord_pargs {
 public:


  virtual ~RedisProxyService_addWord_pargs() throw();
  const Word* word;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RedisProxyService_addWord_result__isset {
  _RedisProxyService_addWord_result__isset() : success(false) {}
  bool success :1;
} _RedisProxyService_addWord_result__isset;

class RedisProxyService_addWord_result {
 public:

  RedisProxyService_addWord_result(const RedisProxyService_addWord_result&);
  RedisProxyService_addWord_result& operator=(const RedisProxyService_addWord_result&);
  RedisProxyService_addWord_result() : success(0) {
  }

  virtual ~RedisProxyService_addWord_result() throw();
  int64_t success;

  _RedisProxyService_addWord_result__isset __isset;

  void __set_success(const int64_t val);

  bool operator == (const RedisProxyService_addWord_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const RedisProxyService_addWord_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RedisProxyService_addWord_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RedisProxyService_addWord_presult__isset {
  _RedisProxyService_addWord_presult__isset() : success(false) {}
  bool success :1;
} _RedisProxyService_addWord_presult__isset;

class RedisProxyService_addWord_presult {
 public:


  virtual ~RedisProxyService_addWord_presult() throw();
  int64_t* success;

  _RedisProxyService_addWord_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _RedisProxyService_getWord_args__isset {
  _RedisProxyService_getWord_args__isset() : id(false) {}
  bool id :1;
} _RedisProxyService_getWord_args__isset;

class RedisProxyService_getWord_args {
 public:

  RedisProxyService_getWord_args(const RedisProxyService_getWord_args&);
  RedisProxyService_getWord_args& operator=(const RedisProxyService_getWord_args&);
  RedisProxyService_getWord_args() : id(0) {
  }

  virtual ~RedisProxyService_getWord_args() throw();
  int64_t id;

  _RedisProxyService_getWord_args__isset __isset;

  void __set_id(const int64_t val);

  bool operator == (const RedisProxyService_getWord_args & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    return true;
  }
  bool operator != (const RedisProxyService_getWord_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RedisProxyService_getWord_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class RedisProxyService_getWord_pargs {
 public:


  virtual ~RedisProxyService_getWord_pargs() throw();
  const int64_t* id;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RedisProxyService_getWord_result__isset {
  _RedisProxyService_getWord_result__isset() : success(false) {}
  bool success :1;
} _RedisProxyService_getWord_result__isset;

class RedisProxyService_getWord_result {
 public:

  RedisProxyService_getWord_result(const RedisProxyService_getWord_result&);
  RedisProxyService_getWord_result& operator=(const RedisProxyService_getWord_result&);
  RedisProxyService_getWord_result() {
  }

  virtual ~RedisProxyService_getWord_result() throw();
  Word success;

  _RedisProxyService_getWord_result__isset __isset;

  void __set_success(const Word& val);

  bool operator == (const RedisProxyService_getWord_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const RedisProxyService_getWord_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RedisProxyService_getWord_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RedisProxyService_getWord_presult__isset {
  _RedisProxyService_getWord_presult__isset() : success(false) {}
  bool success :1;
} _RedisProxyService_getWord_presult__isset;

class RedisProxyService_getWord_presult {
 public:


  virtual ~RedisProxyService_getWord_presult() throw();
  Word* success;

  _RedisProxyService_getWord_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class RedisProxyService_getAllWord_args {
 public:

  RedisProxyService_getAllWord_args(const RedisProxyService_getAllWord_args&);
  RedisProxyService_getAllWord_args& operator=(const RedisProxyService_getAllWord_args&);
  RedisProxyService_getAllWord_args() {
  }

  virtual ~RedisProxyService_getAllWord_args() throw();

  bool operator == (const RedisProxyService_getAllWord_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const RedisProxyService_getAllWord_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RedisProxyService_getAllWord_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class RedisProxyService_getAllWord_pargs {
 public:


  virtual ~RedisProxyService_getAllWord_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RedisProxyService_getAllWord_result__isset {
  _RedisProxyService_getAllWord_result__isset() : success(false) {}
  bool success :1;
} _RedisProxyService_getAllWord_result__isset;

class RedisProxyService_getAllWord_result {
 public:

  RedisProxyService_getAllWord_result(const RedisProxyService_getAllWord_result&);
  RedisProxyService_getAllWord_result& operator=(const RedisProxyService_getAllWord_result&);
  RedisProxyService_getAllWord_result() {
  }

  virtual ~RedisProxyService_getAllWord_result() throw();
  std::vector<Word>  success;

  _RedisProxyService_getAllWord_result__isset __isset;

  void __set_success(const std::vector<Word> & val);

  bool operator == (const RedisProxyService_getAllWord_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const RedisProxyService_getAllWord_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RedisProxyService_getAllWord_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RedisProxyService_getAllWord_presult__isset {
  _RedisProxyService_getAllWord_presult__isset() : success(false) {}
  bool success :1;
} _RedisProxyService_getAllWord_presult__isset;

class RedisProxyService_getAllWord_presult {
 public:


  virtual ~RedisProxyService_getAllWord_presult() throw();
  std::vector<Word> * success;

  _RedisProxyService_getAllWord_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _RedisProxyService_userBuyWord_args__isset {
  _RedisProxyService_userBuyWord_args__isset() : userId(false), wordId(false) {}
  bool userId :1;
  bool wordId :1;
} _RedisProxyService_userBuyWord_args__isset;

class RedisProxyService_userBuyWord_args {
 public:

  RedisProxyService_userBuyWord_args(const RedisProxyService_userBuyWord_args&);
  RedisProxyService_userBuyWord_args& operator=(const RedisProxyService_userBuyWord_args&);
  RedisProxyService_userBuyWord_args() : userId(0), wordId(0) {
  }

  virtual ~RedisProxyService_userBuyWord_args() throw();
  int64_t userId;
  int64_t wordId;

  _RedisProxyService_userBuyWord_args__isset __isset;

  void __set_userId(const int64_t val);

  void __set_wordId(const int64_t val);

  bool operator == (const RedisProxyService_userBuyWord_args & rhs) const
  {
    if (!(userId == rhs.userId))
      return false;
    if (!(wordId == rhs.wordId))
      return false;
    return true;
  }
  bool operator != (const RedisProxyService_userBuyWord_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RedisProxyService_userBuyWord_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class RedisProxyService_userBuyWord_pargs {
 public:


  virtual ~RedisProxyService_userBuyWord_pargs() throw();
  const int64_t* userId;
  const int64_t* wordId;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class RedisProxyService_userBuyWord_result {
 public:

  RedisProxyService_userBuyWord_result(const RedisProxyService_userBuyWord_result&);
  RedisProxyService_userBuyWord_result& operator=(const RedisProxyService_userBuyWord_result&);
  RedisProxyService_userBuyWord_result() {
  }

  virtual ~RedisProxyService_userBuyWord_result() throw();

  bool operator == (const RedisProxyService_userBuyWord_result & /* rhs */) const
  {
    return true;
  }
  bool operator != (const RedisProxyService_userBuyWord_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RedisProxyService_userBuyWord_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class RedisProxyService_userBuyWord_presult {
 public:


  virtual ~RedisProxyService_userBuyWord_presult() throw();

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _RedisProxyService_getChargeUsers_args__isset {
  _RedisProxyService_getChargeUsers_args__isset() : word(false) {}
  bool word :1;
} _RedisProxyService_getChargeUsers_args__isset;

class RedisProxyService_getChargeUsers_args {
 public:

  RedisProxyService_getChargeUsers_args(const RedisProxyService_getChargeUsers_args&);
  RedisProxyService_getChargeUsers_args& operator=(const RedisProxyService_getChargeUsers_args&);
  RedisProxyService_getChargeUsers_args() {
  }

  virtual ~RedisProxyService_getChargeUsers_args() throw();
  Word word;

  _RedisProxyService_getChargeUsers_args__isset __isset;

  void __set_word(const Word& val);

  bool operator == (const RedisProxyService_getChargeUsers_args & rhs) const
  {
    if (!(word == rhs.word))
      return false;
    return true;
  }
  bool operator != (const RedisProxyService_getChargeUsers_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RedisProxyService_getChargeUsers_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class RedisProxyService_getChargeUsers_pargs {
 public:


  virtual ~RedisProxyService_getChargeUsers_pargs() throw();
  const Word* word;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RedisProxyService_getChargeUsers_result__isset {
  _RedisProxyService_getChargeUsers_result__isset() : success(false) {}
  bool success :1;
} _RedisProxyService_getChargeUsers_result__isset;

class RedisProxyService_getChargeUsers_result {
 public:

  RedisProxyService_getChargeUsers_result(const RedisProxyService_getChargeUsers_result&);
  RedisProxyService_getChargeUsers_result& operator=(const RedisProxyService_getChargeUsers_result&);
  RedisProxyService_getChargeUsers_result() {
  }

  virtual ~RedisProxyService_getChargeUsers_result() throw();
  std::vector<User>  success;

  _RedisProxyService_getChargeUsers_result__isset __isset;

  void __set_success(const std::vector<User> & val);

  bool operator == (const RedisProxyService_getChargeUsers_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const RedisProxyService_getChargeUsers_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RedisProxyService_getChargeUsers_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RedisProxyService_getChargeUsers_presult__isset {
  _RedisProxyService_getChargeUsers_presult__isset() : success(false) {}
  bool success :1;
} _RedisProxyService_getChargeUsers_presult__isset;

class RedisProxyService_getChargeUsers_presult {
 public:


  virtual ~RedisProxyService_getChargeUsers_presult() throw();
  std::vector<User> * success;

  _RedisProxyService_getChargeUsers_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class RedisProxyService_getAllToken_args {
 public:

  RedisProxyService_getAllToken_args(const RedisProxyService_getAllToken_args&);
  RedisProxyService_getAllToken_args& operator=(const RedisProxyService_getAllToken_args&);
  RedisProxyService_getAllToken_args() {
  }

  virtual ~RedisProxyService_getAllToken_args() throw();

  bool operator == (const RedisProxyService_getAllToken_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const RedisProxyService_getAllToken_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RedisProxyService_getAllToken_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class RedisProxyService_getAllToken_pargs {
 public:


  virtual ~RedisProxyService_getAllToken_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RedisProxyService_getAllToken_result__isset {
  _RedisProxyService_getAllToken_result__isset() : success(false) {}
  bool success :1;
} _RedisProxyService_getAllToken_result__isset;

class RedisProxyService_getAllToken_result {
 public:

  RedisProxyService_getAllToken_result(const RedisProxyService_getAllToken_result&);
  RedisProxyService_getAllToken_result& operator=(const RedisProxyService_getAllToken_result&);
  RedisProxyService_getAllToken_result() {
  }

  virtual ~RedisProxyService_getAllToken_result() throw();
  std::vector<Token>  success;

  _RedisProxyService_getAllToken_result__isset __isset;

  void __set_success(const std::vector<Token> & val);

  bool operator == (const RedisProxyService_getAllToken_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const RedisProxyService_getAllToken_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RedisProxyService_getAllToken_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _RedisProxyService_getAllToken_presult__isset {
  _RedisProxyService_getAllToken_presult__isset() : success(false) {}
  bool success :1;
} _RedisProxyService_getAllToken_presult__isset;

class RedisProxyService_getAllToken_presult {
 public:


  virtual ~RedisProxyService_getAllToken_presult() throw();
  std::vector<Token> * success;

  _RedisProxyService_getAllToken_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class RedisProxyServiceClient : virtual public RedisProxyServiceIf {
 public:
  RedisProxyServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  RedisProxyServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void getUser(User& _return, const int64_t id);
  void send_getUser(const int64_t id);
  void recv_getUser(User& _return);
  int64_t addUser(const User& user);
  void send_addUser(const User& user);
  int64_t recv_addUser();
  void getAllUser(std::vector<User> & _return);
  void send_getAllUser();
  void recv_getAllUser(std::vector<User> & _return);
  int64_t addWord(const Word& word);
  void send_addWord(const Word& word);
  int64_t recv_addWord();
  void getWord(Word& _return, const int64_t id);
  void send_getWord(const int64_t id);
  void recv_getWord(Word& _return);
  void getAllWord(std::vector<Word> & _return);
  void send_getAllWord();
  void recv_getAllWord(std::vector<Word> & _return);
  void userBuyWord(const int64_t userId, const int64_t wordId);
  void send_userBuyWord(const int64_t userId, const int64_t wordId);
  void recv_userBuyWord();
  void getChargeUsers(std::vector<User> & _return, const Word& word);
  void send_getChargeUsers(const Word& word);
  void recv_getChargeUsers(std::vector<User> & _return);
  void getAllToken(std::vector<Token> & _return);
  void send_getAllToken();
  void recv_getAllToken(std::vector<Token> & _return);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class RedisProxyServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<RedisProxyServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (RedisProxyServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_getUser(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_addUser(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getAllUser(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_addWord(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getWord(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getAllWord(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_userBuyWord(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getChargeUsers(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getAllToken(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  RedisProxyServiceProcessor(boost::shared_ptr<RedisProxyServiceIf> iface) :
    iface_(iface) {
    processMap_["getUser"] = &RedisProxyServiceProcessor::process_getUser;
    processMap_["addUser"] = &RedisProxyServiceProcessor::process_addUser;
    processMap_["getAllUser"] = &RedisProxyServiceProcessor::process_getAllUser;
    processMap_["addWord"] = &RedisProxyServiceProcessor::process_addWord;
    processMap_["getWord"] = &RedisProxyServiceProcessor::process_getWord;
    processMap_["getAllWord"] = &RedisProxyServiceProcessor::process_getAllWord;
    processMap_["userBuyWord"] = &RedisProxyServiceProcessor::process_userBuyWord;
    processMap_["getChargeUsers"] = &RedisProxyServiceProcessor::process_getChargeUsers;
    processMap_["getAllToken"] = &RedisProxyServiceProcessor::process_getAllToken;
  }

  virtual ~RedisProxyServiceProcessor() {}
};

class RedisProxyServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  RedisProxyServiceProcessorFactory(const ::boost::shared_ptr< RedisProxyServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< RedisProxyServiceIfFactory > handlerFactory_;
};

class RedisProxyServiceMultiface : virtual public RedisProxyServiceIf {
 public:
  RedisProxyServiceMultiface(std::vector<boost::shared_ptr<RedisProxyServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~RedisProxyServiceMultiface() {}
 protected:
  std::vector<boost::shared_ptr<RedisProxyServiceIf> > ifaces_;
  RedisProxyServiceMultiface() {}
  void add(boost::shared_ptr<RedisProxyServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void getUser(User& _return, const int64_t id) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getUser(_return, id);
    }
    ifaces_[i]->getUser(_return, id);
    return;
  }

  int64_t addUser(const User& user) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->addUser(user);
    }
    return ifaces_[i]->addUser(user);
  }

  void getAllUser(std::vector<User> & _return) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getAllUser(_return);
    }
    ifaces_[i]->getAllUser(_return);
    return;
  }

  int64_t addWord(const Word& word) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->addWord(word);
    }
    return ifaces_[i]->addWord(word);
  }

  void getWord(Word& _return, const int64_t id) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getWord(_return, id);
    }
    ifaces_[i]->getWord(_return, id);
    return;
  }

  void getAllWord(std::vector<Word> & _return) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getAllWord(_return);
    }
    ifaces_[i]->getAllWord(_return);
    return;
  }

  void userBuyWord(const int64_t userId, const int64_t wordId) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->userBuyWord(userId, wordId);
    }
    ifaces_[i]->userBuyWord(userId, wordId);
  }

  void getChargeUsers(std::vector<User> & _return, const Word& word) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getChargeUsers(_return, word);
    }
    ifaces_[i]->getChargeUsers(_return, word);
    return;
  }

  void getAllToken(std::vector<Token> & _return) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getAllToken(_return);
    }
    ifaces_[i]->getAllToken(_return);
    return;
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class RedisProxyServiceConcurrentClient : virtual public RedisProxyServiceIf {
 public:
  RedisProxyServiceConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  RedisProxyServiceConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void getUser(User& _return, const int64_t id);
  int32_t send_getUser(const int64_t id);
  void recv_getUser(User& _return, const int32_t seqid);
  int64_t addUser(const User& user);
  int32_t send_addUser(const User& user);
  int64_t recv_addUser(const int32_t seqid);
  void getAllUser(std::vector<User> & _return);
  int32_t send_getAllUser();
  void recv_getAllUser(std::vector<User> & _return, const int32_t seqid);
  int64_t addWord(const Word& word);
  int32_t send_addWord(const Word& word);
  int64_t recv_addWord(const int32_t seqid);
  void getWord(Word& _return, const int64_t id);
  int32_t send_getWord(const int64_t id);
  void recv_getWord(Word& _return, const int32_t seqid);
  void getAllWord(std::vector<Word> & _return);
  int32_t send_getAllWord();
  void recv_getAllWord(std::vector<Word> & _return, const int32_t seqid);
  void userBuyWord(const int64_t userId, const int64_t wordId);
  int32_t send_userBuyWord(const int64_t userId, const int64_t wordId);
  void recv_userBuyWord(const int32_t seqid);
  void getChargeUsers(std::vector<User> & _return, const Word& word);
  int32_t send_getChargeUsers(const Word& word);
  void recv_getChargeUsers(std::vector<User> & _return, const int32_t seqid);
  void getAllToken(std::vector<Token> & _return);
  int32_t send_getAllToken();
  void recv_getAllToken(std::vector<Token> & _return, const int32_t seqid);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _WIN32
  #pragma warning( pop )
#endif



#endif
