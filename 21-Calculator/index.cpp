#include <iostream>

using namespace std;

// Function (UDFs)

void add(){
    int num1, num2;
    cout << "\nEnter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Addition of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
}

void subtract(){
    int num1, num2;
    cout << "\nEnter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Subtraction of " << num1 << " and " << num2 << " is " << num1 - num2 << endl;
}

void multiply(){
    int num1, num2;
    cout << "\nEnter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Multiplication of " << num1 << " and " << num2 << " is " << num1 * num2 << endl;
}

void divide(){
    int num1, num2;
    cout << "\nEnter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Division of " << num1 << " and " << num2 << " is " << num1 / num2 << endl;
}

void modulo(){
    int num1, num2;
    cout << "\nEnter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Modulus of " << num1 << " and " << num2 << " is " << num1 % num2 << endl;
}

int main() {
    int choice, num1, num2;

    while (choice != 0) {
       
        cout << "\nPress 1 for +";
        cout << "\nPress 2 for -";
        cout << "\nPress 3 for *";
        cout << "\nPress 4 for /";
        cout << "\nPress 5 for %";
        cout << "\nPress 0 for the exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;


        switch (choice) {
            case 1:
                 add();

                break;
            case 2:
                subtract();
                
                break;
            case 3:
                 multiply();
               
                break;
            case 4:
                divide();
                
                break;
            case 5:
                 modulo();
              
                break;
            default:
                cout << "You are exit! Please try again." << endl;
        }
    }

    return 0;
}