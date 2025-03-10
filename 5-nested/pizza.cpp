#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Choose a food item:\n";
    // cout << "1. Pizza\n2. Burger\n3. Sandwich\n4. Pasta\n";
    cout << "Press 1 for PIZZA" << endl;
    cout << "Press 2 for BURGER" << endl;
    cout << "Press 3 for SANDWITCH" << endl;
    cout << "Press 4 for PASTA" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "You selected: " << ((choice == 1) ? "Pizza" :
                                  (choice == 2) ? "Burger" :
                                  (choice == 3) ? "Sandwich" :
                                  (choice == 4) ? "Pasta" : "Invalid Choice") << endl;
    
    return 0;
}