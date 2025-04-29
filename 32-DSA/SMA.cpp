
// Static Memory Allocation

#include <iostream>

using namespace std;

int main() {
    // Static memory allocation for an array of 3 integers
    int numbers[3] = {10, 20, 30};

    // Printing the array elements
    cout << "Array elements: ";
    
    for (int i = 0; i < 3; i++) 
    {
        cout << numbers[i] << " ";
    }

    return 0;
}
