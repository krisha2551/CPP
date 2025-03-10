#include<iostream>

using namespace std;

int main(){

int j=1;

int fact = 1;

while(j<=5)
{

    fact = fact * j;

    j++;
}

cout << "factorial = " << fact;


    return 0;
}