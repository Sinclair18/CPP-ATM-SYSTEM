#include "Account.h"
#include <iostream>
#include <iomanip>

float Account::depositMoney()
{
    int depAmount;
    std::cout << "Enter deposit amount: ";
    std::cin >> depAmount;

    if (depAmount > 0)
    {
        m_balance += depAmount;
        std::cout << "Your balance is now " << m_balance << " Naira \n";
    }
    else
    {
        std::cout << "Enter a valid amount \n";
    }
    return m_balance;
}

void Account::checkBalance()
{
    std::cout << "Balance: " << std::fixed
              << std::setprecision(2) << m_balance << " Naira" << std::endl;
}

bool Account::withdrawMoney()
{
    int wrdAmount, pinEntry, attempts = 0;
    bool valid = attempts < 3;

    std::cout << "Enter withdrawal amount: ";
    std::cin >> wrdAmount;

    if (wrdAmount <= m_balance)
    {
        while (valid)
        {
            std::cout << "Enter your Withdrawal pin: ";
            std::cin >> pinEntry;
            if (pinEntry == m_wrdPin)
            {
                m_balance -= wrdAmount;
                std::cout << wrdAmount << " withdrawn successfully!\n";
                std::cout << "Balance: " << m_balance << " Naira \n";
                valid = false;
                break;
            }
            else
            {
                attempts += 1;
                std::cout << "Wrong pin. you have " << 3 - attempts << " chances left\n";
                std::cout << "Re-enter pin: ";
            }
        }
        if (attempts >= 3)
        {
            std::cout << "Too many wrong attempts. Transaction cancelled.\n";
            return false;
        }
    }
    else
    {
        std::cout << "See this thief. Your Withdrawal amount is larger than your balance!" << std::endl;
    }
    return false;
}

bool Account::verifyPin()
{
    int pinEntry;
    std::cin >> pinEntry;

    return pinEntry == m_pin;
}

int Account::setm_wrdPin()
{
    int oldm_wrdPin, newm_wrdPin;

    std::cout << "Enter old withdrawal Pin: ";
    std::cin >> oldm_wrdPin;

    if (oldm_wrdPin == m_wrdPin)
    {
        std::cout << "Set new withdrawal pin: ";
        std::cin >> newm_wrdPin;

        std::cout << "\nWithdrawal Pin Changed.\n";
        m_wrdPin = newm_wrdPin;
        return 0;
    }
    else
    {
        std::cout << "\nPlease Enter the correct pin\n";
        return 1;
    }
}

void Account::changePin()
{
    int oldPin, newPin;
    bool changeProcess = true;

    std::cout << "Old login pin: ";
    std::cin >> oldPin;

    while (changeProcess)
    {
        if (oldPin == m_pin)
        {
            std::cout << "New login pin: ";
            std::cin >> newPin;
            m_pin = newPin;
            std::cout << "\nLogin Pin Changed.\n";
            changeProcess = false;
            break;
        }

        else
        {
            std::cout << "\nPlease Enter the correct old pin\n";
            changeProcess = false;
            break;
        }
    }
}

void Account::addTransaction()
{
}
