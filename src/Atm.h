#ifndef ATM_H
#define ATM_H

#include "Account.h"

class Atm
{
private:
    bool m_isLoggedIn = false;
    bool m_exit = false;

public:
    Account userAccount;

    void displayMenu();
    void login();
    void run();
    bool handleUserSelection();
};

#endif
