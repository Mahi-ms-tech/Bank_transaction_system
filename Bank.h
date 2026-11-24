#ifndef BANK_H
#define BANK_H

#include <string>

class Bank
{
private:
    int accountno;
    std::string name;
    double balance;
    std::string password;
    std::string mobileno;

    void setPassword();
    bool verifyPassword() const;

public:
    Bank();

    void deposit();
    void withdrawal();
    void balanceEnquiry();
    void forgetPassword();
    void changePassword();
    void displayAccountDetails() const;
};

#endif
