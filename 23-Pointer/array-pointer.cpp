#include<iostream>

using namespace std;


int main(){
    int a = 20;

    int *ptr = &a;

    cout << *ptr << endl;


int arr[5] = {9, 8, 7, 6, 5};


int *ptrArr[5];

for(int i=0; i<5; i++)
{
    ptrArr[i] = &arr[i];
}

// cout << ptrArr <<endl;

// cout << &arr[1] << endl;
// cout << &arr[2] << endl;
// cout << &arr[3] << endl;

for(int i=0; i<5; i++)
{
   cout << ptrArr[i] << " == " << *ptrArr[i] << endl;
}



        return 0;
}