#include <iostream>
#include <string>

class Account {
public:
	Account();
	std::string getAccNum();
private:
	std::string account_num;
	//changes from remote
	//Quang: resolve ISO8583
};
