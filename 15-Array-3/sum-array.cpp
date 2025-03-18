#include<iostream>

using namespace std;

int main(){

    int size;

    cout << "size: ";
    cin >> size;

    int A[size], B[size], C[size];

// int A[5] = {1, 2, 3, 4, 5};
// int B[5] = {9, 8, 7, 6, 5};
// int C[5];

// int size = sizeof(A) / sizeof(A[0]);

for(int i=0; i<size; i++)
{
    cout << "A["<< i << "]: ";
    cin >> A[i];
}

cout << endl << endl;

for(int i=0; i<size; i++)
{
    cout << "b["<< i << "]: ";
    cin >> B[i];
}

cout << endl << endl;

// C[0] = A[0] + B[0]
// C[1] = A[1] + B[1]
// C[2] = A[2] + B[2] = 10


for(int i=0; i<size; i++)
{
    C[i] = A[i] + B[i];
    cout << C[i] << " ";
}



    return 0;
}