#include<iostream>

using namespace std;

int main()
{
    int num, first, last, sum;
    
    cout << "Enter a number: ";
    cin >> num;

    num = abs(num); 
    last = num % 10; 

   
    while (num >= 10) {
        num /= 10;
    }
    first = num; 

    sum = first + last;

    cout << "Sum of first and last digit: " << sum << endl;
    
    return 0;
}