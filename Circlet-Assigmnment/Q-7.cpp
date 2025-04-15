#include <iostream>

using namespace std;

int main() {
    int rows = 5;
    // cout << "Enter number of rows: ";
    // cin >> rows;

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < rows; j++) 
        {
            if (i == 0 || i == 2) 
            {
               cout << "* ";
            } 
            else if ((i == 1 && (j == 0 || j == rows - 1)) || (i > 2 && j == 0)) 
            {
                cout << "* ";
            }
            else 
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}