#include "Account.h";

Account::Account(void) {
	account_num = "#dummy account12345";
}
std::string Account::getAccNum() {
	return account_num;
}