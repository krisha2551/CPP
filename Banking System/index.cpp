#include <iostream>
using namespace std;

// Base class
class BankAccount {
public:
    int accountNumber;
    string accountHolderName;
    double balance;

    void deposit(double amount) {
        balance += amount;
    }

    void displayAccountInfo() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

// Derived class: SavingsAccount
class SavingsAccount : public BankAccount {
public:
    double interestRate;

    void calculateInterest() {
        double interest = balance * interestRate / 100;
        cout << "Interest: " << interest << endl;
    }
};

// Derived class: CheckingAccount
class CheckingAccount : public BankAccount {
public:
    double overdraftLimit;

    void checkOverdraft(double amount) {
        if (amount > balance + overdraftLimit)
            cout << "Overdraft limit exceeded!" << endl;
        else
            cout << "Withdrawal allowed." << endl;
    }
};

int main() {
    SavingsAccount sa;
    sa.accountNumber = 101;
    sa.accountHolderName = "Riya";
    sa.balance = 1000;
    sa.interestRate = 5;

    sa.displayAccountInfo();
    sa.calculateInterest();

    cout << endl;

    CheckingAccount ca;
    ca.accountNumber = 102;
    ca.accountHolderName = "Kinal";
    ca.balance = 500;
    ca.overdraftLimit = 200;

    ca.displayAccountInfo();
    ca.checkOverdraft(600);

    return 0;
}
