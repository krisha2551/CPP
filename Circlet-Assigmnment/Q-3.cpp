#include <iostream>

using namespace std;

int main() {
    int row;

    cout << "Enter the number of row: ";
    cin >> row;

   
    for (int i = row; i >= 1; i--) 
    {
       
        for (int k = 1; k < i; k++) 
        {
            cout << "  ";  
        }

       
        for (int j = i; j <= row; j++) 
        {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}