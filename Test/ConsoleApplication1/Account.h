#include <iostream>
#include <string>

class Account {
public:
	Account();
	std::string getAccNum();
	std::string getCIF();
private:
	std::string account_num;
	std::string cif;
};