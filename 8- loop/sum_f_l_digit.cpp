#include<iostream>

using namespace std;

int main(){

    int num = 234342;

    int last_digit = num%10;

    int first_digit = 0;


    while(num > 10)
    {
        num = num/10;

        first_digit = num;
    }
    
    int sum = first_digit + last_digit;

    cout << sum << endl;
    return 0;
}