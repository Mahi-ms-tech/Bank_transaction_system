#include <iostream>
#include <limits>
#include "Bank.h"

using namespace std;

void Bank::setPassword()
{
    cout << "Set the password: ";
    cin >> password;
}

bool Bank::verifyPassword() const
{
    string enteredPassword;

    cout << "Enter the password: ";
    cin >> enteredPassword;

    if (enteredPassword == password)
    {
        return true;
    }

    cout << "Invalid password.\n";
    return false;
}

Bank::Bank()
{
    cout << "========== CREATE BANK ACCOUNT ==========\n";

    cout << "Enter the account number: ";
    cin >> accountno;

    cout << "Enter the account holder name: ";
    getline(cin >> ws, name);

    cout << "Enter the initial balance: Rs. ";
    cin >> balance;

    while (cin.fail() || balance < 0)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\\n');
        cout << "Invalid balance. Enter a non-negative amount: Rs. ";
        cin >> balance;
    }

    cout << "Enter the registered mobile number: ";
    cin >> mobileno;

    setPassword();

    cout << "\nAccount created successfully!\n";
}

void Bank::deposit()
{
    if (verifyPassword())
    {
        double amount;

        cout << "Enter the deposit amount: Rs. ";
        cin >> amount;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\\n');
            cout << "Invalid amount.\n";
            return;
        }

        if (amount > 0)
        {
            balance += amount;
            cout << "Amount deposited successfully.\n";
            cout << "Current balance: Rs. " << balance << '\n';
        }
        else
        {
            cout << "Enter an amount greater than zero.\n";
        }
    }
}

void Bank::withdrawal()
{
    if (verifyPassword())
    {
        double amount;

        cout << "Enter the amount to withdraw: Rs. ";
        cin >> amount;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\\n');
            cout << "Invalid amount.\n";
            return;
        }

        if (amount <= 0)
        {
            cout << "Enter an amount greater than zero.\n";
        }
        else if (amount > balance)
        {
            cout << "Insufficient balance.\n";
        }
        else
        {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
            cout << "Current balance: Rs. " << balance << '\n';
        }
    }
}

void Bank::balanceEnquiry()
{
    if (verifyPassword())
    {
        cout << "Current balance: Rs. " << balance << '\n';
    }
}

void Bank::forgetPassword()
{
    string enteredMobileNumber;

    cout << "Enter the registered mobile number: ";
    cin >> enteredMobileNumber;

    if (enteredMobileNumber == mobileno)
    {
        cout << "Mobile number verified successfully.\n";
        setPassword();
        cout << "Password successfully changed.\n";
    }
    else
    {
        cout << "Incorrect mobile number.\n";
    }
}

void Bank::changePassword()
{
    if (verifyPassword())
    {
        cout << "Password verified successfully.\n";
        setPassword();
        cout << "Password changed successfully.\n";
    }
}

void Bank::displayAccountDetails() const
{
    cout << "\n----- ACCOUNT DETAILS -----\n";
    cout << "Account Number : " << accountno << '\n';
    cout << "Account Holder : " << name << '\n';
    cout << "Mobile Number  : " << mobileno << '\n';
    cout << "Balance        : Rs. " << balance << '\n';
}
