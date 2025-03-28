#include<iostream>

using namespace std;

int main(){
    
    int rows, cols;

    // Input: Number of rows and columns
    cout << "Enter the array's row size: ";
    cin >> rows;
    cout << "Enter the array's column size: ";
    cin >> cols;

    int arr[rows][cols];

    // Input: Elements of the array
    cout << "\nEnter array's elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

      // Sum of a specific row
      int rowNum, rowSum = 0;
      cout << "\nEnter row number: ";
      cin >> rowNum;
      for (int j = 0; j < cols; j++)
      {
        rowSum += arr[rowNum][j];
      }
        cout << "Row sum: " << rowSum << endl;
  
      // Sum of a specific column
      int colNum, colSum = 0;
      cout << "\nEnter column number: ";
      cin >> colNum;
      for (int i = 0; i < rows; i++)
      {
        colSum += arr[i][colNum];
      }
        cout << "Column sum: " << colSum << endl;
  
    return 0;
}