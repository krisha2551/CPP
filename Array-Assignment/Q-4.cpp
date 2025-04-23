#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the array's row size: ";
    cin >> rows;
    cout << "Enter the array's column size: ";
    cin >> cols;

    int arr[rows][cols];

  
    cout << "Enter array's elements:\n";
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    // Sum of  row
    int rowNum;
    cout << "\nEnter row number: ";
    cin >> rowNum;

    int rowSum = 0;
    cout << "Elements of row " << rowNum << ": ";
    for (int j = 0; j < cols; j++) 
    {
        cout << arr[rowNum][j] << " ";
        rowSum += arr[rowNum][j];
    }
    cout << "\nThe sum of a row " << rowNum << ": " << rowSum << endl;

    // Sum of  column
    int colNum;
    cout << "\nEnter column number: ";
    cin >> colNum;

    int colSum = 0;
    cout << "Elements of column " << colNum << ": ";
    for (int i = 0; i < rows; i++) 
    {
        cout << arr[i][colNum] << " ";
        colSum += arr[i][colNum];
    }
    cout << "\nThe sum of column " << colNum << ": " << colSum << endl;

    return 0;
}
