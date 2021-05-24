#include <iostream>
#include "Account.h"

int main()
{
    std::cout << "DB Orchestrator!" << std::endl;

    Account account;

    std::cout << account.getAccNum() << std::endl;
}
