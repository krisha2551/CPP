#include<iostream>
using namespace std;

int main(){

int size;

cout << "size: ";
cin >> size;

int arr[size][size];

arr[0][0] = 101;

// insertion

for(int i=0; i<size; i++)
{
    for(int j=0; j<size; j++)
    {
        cout << "arr[" <<i<< "][" << j << "]: " ;
        cin >> arr[i][j];
    }
}

// iteration

for(int i=0; i<size; i++) 
{
    for(int j=0; j<size; j++) 
    {
        cout << arr[i][j] << " ";
    }
    cout << endl;
}


    return 0;
}