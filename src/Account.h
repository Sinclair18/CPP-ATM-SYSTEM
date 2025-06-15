#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
private:
    float m_balance = 0.00;
    int m_pin = 2000, m_accountNumber, m_wrdPin = 2000;

public:
    float depositMoney();
    void checkBalance();
    bool withdrawMoney();
    bool verifyPin();
    int setm_wrdPin();
    void changePin();
    void addTransaction();
};

#endif
