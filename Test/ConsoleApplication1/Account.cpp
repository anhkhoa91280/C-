#include "Account.h";

Account::Account(void) {
	account_num = "#dummy account";
}
std::string Account::getAccNum() {
	return account_num;
}