#include <iostream>
#include <limits>
#include "Bank.h"

using namespace std;

int main()
{
    Bank bank;
    int choice;

    do
    {
        cout << "\n========== BANK MENU ==========\n";
        cout << "1. Deposit\n";
        cout << "2. Withdrawal\n";
        cout << "3. Balance Enquiry\n";
        cout << "4. Change Password\n";
        cout << "5. Forget Password\n";
        cout << "6. Display Account Details\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";

        cin >> choice;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\\n');
            cout << "Please enter a numeric menu choice.\n";
            continue;
        }

        switch (choice)
        {
            case 1:
                bank.deposit();
                break;

            case 2:
                bank.withdrawal();
                break;

            case 3:
                bank.balanceEnquiry();
                break;

            case 4:
                bank.changePassword();
                break;

            case 5:
                bank.forgetPassword();
                break;

            case 6:
                bank.displayAccountDetails();
                break;

            case 7:
                cout << "Thank you for using our bank!\n";
                break;

            default:
                cout << "You have entered an incorrect choice.\n";
        }

    } while (choice != 7);

    return 0;
}
