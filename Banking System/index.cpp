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
        cout << "\n--- Account Information ---" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

// Derived class
class SavingsAccount : public BankAccount {
public:
    double interestRate;

    void calculateInterest() {
        double interest = balance * interestRate / 100;
        cout << "Interest: " << interest << endl;
    }
};

// Derived class
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

// Derived class
class FixedDepositAccount : public BankAccount {
public:
    int termMonths;

    void calculateInterest() {
        double rate = 6.0; 
        double interest = balance * rate * (termMonths / 12.0) / 100;
        cout << "Fixed Deposit Interest: " << interest << endl;
    }
};

int main() {
    int choice;
    cout << "Select Account Type:" << endl;
    cout << "1. Savings Account" << endl;
    cout << "2. Checking Account" << endl;
    cout << "3. Fixed Deposit Account" << endl;
    cout << "Enter your choice : ";
    cin >> choice;

    switch (choice) {
    case 1: {
        SavingsAccount sa;
        cout << "\nEnter Account Number: ";
        cin >> sa.accountNumber;
        cout << "Enter Account Holder Name: ";
        cin >> sa.accountHolderName ;
        cout << "Enter Balance: ";
        cin >> sa.balance;
        cout << "Enter Interest Rate: ";
        cin >> sa.interestRate;

        sa.displayAccountInfo();
        sa.calculateInterest();
        break;
    }
    case 2: {
        CheckingAccount ca;
        cout << "\nEnter Account Number: ";
        cin >> ca.accountNumber;
        cout << "Enter Account Holder Name: ";
        cin >> ca.accountHolderName ;
        cout << "Enter Balance: ";
        cin >> ca.balance;
        cout << "Enter Overdraft Limit: ";
        cin >> ca.overdraftLimit;

        double withdrawal;
        cout << "Enter Withdrawal Amount: ";
        cin >> withdrawal;

        ca.displayAccountInfo();
        ca.checkOverdraft(withdrawal);
        break;
    }
    case 3: {
        FixedDepositAccount fda;
        cout << "\nEnter Account Number: ";
        cin >> fda.accountNumber;
        cout << "Enter Account Holder Name: ";
        cin >> fda.accountHolderName;
        cout << "Enter Balance: ";
        cin >> fda.balance;
        cout << "Enter Term (months): ";
        cin >> fda.termMonths;

        fda.displayAccountInfo();
        fda.calculateInterest();
        break;
    }
    default:
        cout << "Invalid choice!" << endl;
    break;

    }
   

    return 0;
}
