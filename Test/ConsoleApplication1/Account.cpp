#include "Account.h";

Account::Account(void) {
	account_num = "#dummy account123456";
}
std::string Account::getAccNum() {
	return account_num;
}