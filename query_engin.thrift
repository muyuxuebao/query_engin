
struct User{
        1:i64 id, 
        2:string name
} 

struct Word{
        1:i64 id, 
        2:string name
} 
struct Token{
        1:string name,
        2:list<TokenItem> tokenItemVetor
} 
struct TokenItem{
        1:i64 userId, 
        2:i64 wordId,
        3:i32 postion,
        4:i32 length
} 
 
service RedisProxyService{
	User getUser(1:i64 id);
	i64  addUser(1:User user); #add user and return the id of user
	list<User> getAllUser(); 
	
	i64  addWord(1:Word word);
	Word  getWord(1:i64 id);
	list<Word> getAllWord(); 
	
	void userBuyWord(1:i64 userId, 2:i64 wordId);
	
	list<User> getChargeUsers(1:Word word);
	
	
	list<Token> getAllToken();
	
}
