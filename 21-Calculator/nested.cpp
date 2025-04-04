#include<iostream>

using namespace std;

void avg(int s, int n){
    cout << "Avg = " << s/n << endl;
}


void sum(int n){
    int sum = 0;
    for(int i=1; i<=n; i++)
    {
        sum += i;
    }
    avg(sum, n);
 
}



 int main(){

    int num = 10;


    sum(num);

    return 0;
 }