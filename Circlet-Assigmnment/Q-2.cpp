#include <iostream>

using namespace std;

int main() {
    int start, row;

    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the number of row: ";
    cin >> row;

    int num = start; 

  
    for (int i = 1; i <= row; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}