#include<iostream> // preprocessor

using namespace std;



void factorial(){
    int num = 9;
    int factorial = 1;
    for(int i=1; i<=num; i++){
        factorial *= i; // factorial = factorial * i
    }
    cout<< factorial;
}


void factors(){
    int num = 9;
    for(int i=1; i<=num ;i++)  // 1 2
    {
        if(num%i==0)
        {
            cout << i << " ";
        }
    }
}



void table(){
    int num = 9;
    for(int i=1; i<=10; i++)
    {
        cout << num << " x " << i << " = " <<  num*i << endl;
    }
}


int main(){

        factorial();
     
        cout << endl <<  "-----------------------" << endl;

        factors();

        cout << endl <<  "-----------------------" << endl;

        table();

       
return 0;
}