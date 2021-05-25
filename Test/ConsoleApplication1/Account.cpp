#include "Account.h";

Account::Account(void) {
	account_num = "#dummy account12";
}
std::string Account::getAccNum() {
	return account_num;
}