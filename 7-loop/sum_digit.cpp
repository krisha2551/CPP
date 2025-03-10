#include<iostream>

using namespace std;

int main(){


    int i = 12854; 

    int num_digit = 0;

    while(i>0)
    {
        i = i/10; 

        num_digit++;
    }
    cout << num_digit <<endl;

    return 0;
}