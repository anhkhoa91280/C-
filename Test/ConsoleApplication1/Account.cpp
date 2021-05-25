#include "Account.h";

Account::Account(void) {
	account_num = "#dummy";
}
std::string Account::getAccNum() {
	return account_num;
}