#include<iostream>

using namespace std;

int main(){
    
    int i = 1;
    int num;

    cout << "Enter number: ";
    cin >> num;

    while(i<=10)
    {
        cout << num << " x " << i << " = " << num*i << endl;

        i++;

    }

    cout << "-------------------------" << endl;

}