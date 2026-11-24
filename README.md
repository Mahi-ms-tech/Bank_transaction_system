# Bank Management System (C++)

A menu-driven, console-based C++ mini-project based on the supplied `Bank` class program. It creates one bank account and supports password-verified deposits, withdrawals, balance enquiries, password changes, and account-detail display.

## Features

- Create an account with an account number, holder name, opening balance, registered mobile number, and password.
- Deposit money after password verification.
- Withdraw money after password verification and balance checks.
- Check the account balance after password verification.
- Change the password after verifying the current password.
- Reset the password after entering the registered mobile number.
- Display account details.
- Validate negative opening balances and invalid transaction amounts.

## OOP concepts demonstrated

- Classes and objects
- Encapsulation using private data members
- Public and private member functions
- Constructors
- Member function definitions outside the class
- Menu-driven programming
- Conditional statements and loops
- Input validation

## Project structure

```text
Bank_Management_System/
├── main.cpp
├── Bank.h
├── Bank.cpp
├── README.md
└── .gitignore
```

## Requirements

- A C++ compiler such as g++.
- C++11 or later.

## Compile

```bash
g++ -std=c++11 main.cpp Bank.cpp -o bank_management
```

## Run

Linux/macOS:

```bash
./bank_management
```

Windows PowerShell:

```powershell
.\bank_management.exe
```

## Important notes

- This is an educational, single-account console project. Account information and balance exist only while the program is running; they are not saved between executions.
- The password is stored as plain text in memory. This is for demonstrating C++ OOP only and is not suitable for a real banking application.
- The registered mobile number is stored as text to preserve leading zeroes.
- This project does not connect to a bank, payment network, SMS service, or database.
