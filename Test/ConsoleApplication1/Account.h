#include <iostream>
#include <string>

class Account {
public:
	Account();
	std::string getAccNum();
private:
	std::string account_num; //bank account number
	std::string cif; //customer information file
};
