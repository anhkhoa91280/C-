#include <iostream>
#include <string>

class Account {
public:
	Account();
	std::string getAccNum();
private:
	std::string account_num;
	double interest_rate;
	double balance;
};
