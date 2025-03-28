#include<iostream>

using namespace std;

// TNRN : Take Nothing , Return Nothing 


void sum(){
    
    int num = 10;
    int sum = 0;
    for(int i=1; i<=10; i++) // 1, 2, 3
    {
        sum = sum + i; // sum = 0 + 1 = 1; sum = 1 + 2 = 3;   sum = 3 + 3
    }
    cout << sum;
}


int main(){

    sum();


    return 0;
}