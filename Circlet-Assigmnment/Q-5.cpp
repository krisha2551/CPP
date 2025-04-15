#include <iostream>
using namespace std;

int main() {
    int n = 5;
    // cout << "Enter the number of rows: ";
    // cin >> n;

    for (int i = n; i >= 1; i--) 
    {
        for (int space = 1; space < i; space++) 
        {
            cout << "  ";
        }

    
        for (int j = i; j <= n; j++) 
        {
            cout << j << " ";
        }


        for (int j = n - 1; j >= i; j--) 
        {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}