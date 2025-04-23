#include <iostream>
using namespace std;

int main() {

    int rows, cols;

    cout << "Enter the array's row size: ";
    cin >> rows;
    cout << "Enter the array's column size: ";
    cin >> cols;

    int arr[rows][cols];

   
    cout << "Enter array's elements:" << endl;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    int max = arr[0][0];

    // largest element
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            if (arr[i][j] > max) 
            {
                max = arr[i][j];
            }
        }
    }

    cout << "The largest element is: " << max << endl;

    return 0;
}
