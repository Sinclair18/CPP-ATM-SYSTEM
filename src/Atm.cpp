#include <iostream>
#include "Atm.h"

void Atm::displayMenu()
{
    std::cout << "================== MENU =================\n";
    std::cout
        << "1. View Balance\n"
        << "2. Deposit\n"
        << "3. Withdraw\n"
        << "4. Set Withdrawal Pin\n"
        << "5. Change Login Pin\n"
        << "6. exit\n";
    std::cout << "=========================================\n";
}

void Atm::login()
{
    int loginAttempts = 0;
    std::cout << "Enter your login pin: ";

    while (loginAttempts < 3)
    {
        if (userAccount.verifyPin())
        {
            std::cout << "Logged in! " << std::endl;
            m_isLoggedIn = true;
            break;
        }
        else
        {
            loginAttempts += 1;
            std::cout << "Wrong pin. You have " << 3 - loginAttempts << " attempts left" << "\nRe-enter pin: ";

            if (loginAttempts == 3)
            {
                std::cout << "\n\nAccess denied.\nm_exiting...\n";
                m_isLoggedIn = false;
                break;
            }
        }
    }
}

void Atm::run()
{
    login();

    if (!m_isLoggedIn)
    {
        return;
    }

    while (!m_exit)
    {
        displayMenu();
        handleUserSelection();
    }
}

bool Atm::handleUserSelection()
{
    int select;
    std::cout << "Select: ";

    std::cin >> select;

    switch (select)
    {
    case 1:
        userAccount.checkBalance();
        break;

    case 2:
        userAccount.depositMoney();
        break;

    case 3:
        userAccount.withdrawMoney();
        break;

    case 4:
        userAccount.setm_wrdPin();
        break;

    case 5:
        userAccount.changePin();
        break;

    case 6:
        std::cout << "Thank's for using Sinclair service '')\n";
        m_exit = true;
        break;

    default:
        std::cout << "Invalid selection\n";
    }

    return !m_exit;
}
