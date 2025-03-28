#include<iostream>

using namespace std;

// TNRS : Take Nothing , Return Something

int sum(){

    int num = 10;

    int sum = 0;
    for(int i=1; i<=num; i++) 
    {
        sum = sum + i; 
    }
    return sum;
}


int main(){

    int a = 100;
    int b =a ;


    // sum(); // sum == 55

    int avg = sum()/10;
  

    cout << "sum is " << avg;


    return 0;
}