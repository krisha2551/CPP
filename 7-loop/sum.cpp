#include<iostream>

using namespace std;

int main(){

    int j=1;

    int sum = 0;

    while(j<=5)
    {
        sum = sum + j; 

        j++;
    }

    cout << sum << endl;

    return 0;
}