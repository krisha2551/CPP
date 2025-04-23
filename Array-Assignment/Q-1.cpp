#include <iostream>
using namespace std;

int main() {

    int size;

    cout << "Enter the array's size: ";
    cin >> size;

    int arr[size];

    cout << "Enter array's elements:" << endl;
    for (int i = 0; i < size; i++) 
    {
        cout << "a[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "Negative elements from an Array: ";
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] < 0) 
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}