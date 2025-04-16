#include <iostream>
#include<string.h>

using namespace std;

class Bank {

private:
    int balance = 1000;  

public:
    void deposit(int amount) 
    {
        this->balance += amount; 
    }

    void showBalance() 
    {
        cout << "Balance: " << this->balance << " /-" << endl;  
    }

    void withdraw(int amount) 
    {
        if (amount <= this->balance) 
        {
            this->balance -= amount;  
            cout << "Withdrawn: " << amount << " /-" << endl;
        } 
        else 
        {
            cout << "Not enough balance!" << endl;
        }
    }
};

int main() {
    Bank user;

    int option;
    int amount;

    cout << "1. Deposit\n2. Withdraw\n3. Show Balance\n";
    cout << "Enter option: ";
    cin >> option;

    if (option == 1) 
    {
        cout << "Enter amount to deposit: ";
        cin >> amount;
        user.deposit(amount);
        user.showBalance();
    } 
    else if (option == 2) 
    {
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        user.withdraw(amount);
        user.showBalance();
    } 
    else if (option == 3) 
    {
        user.showBalance();
    } 
    else 
    {
        cout << "Invalid option." << endl;
    }

    return 0;
}