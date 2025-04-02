#include <iostream>

using namespace std;

int main() {

    int start, row;

    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the number of row: ";
    cin >> row;

    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++) 
        {
            cout << start + j << " ";
        }
        cout << endl;
    }

    return 0;
}