#include <iostream>
using namespace std;

int main() {
    
    int size;

    cout << "Enter the array's row & column size: ";
    cin >> size;

    int arr[size][size], transpose[size][size];

    cout << "Enter array's elements:" << endl;
    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++) 
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    
    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++) 
        {
            transpose[j][i] = arr[i][j];
        }
    }

    cout << "The transpose matrix of an array:" << endl;
    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++) 
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
