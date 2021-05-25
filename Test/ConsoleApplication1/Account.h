#include <iostream>
#include <string>

class Account {
public:
	Account();
	std::string getAccNum();
private:
	std::string account_num;
	std::string cif;
	double balance;
};
