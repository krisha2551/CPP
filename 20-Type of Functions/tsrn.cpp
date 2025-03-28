#include<iostream>

using namespace std;

// TSRN : Take Something , Return Nothing 


void sum(int n){ 
    
    int sum = 0;
    for(int i=1; i<=n; i++) 
    {
        sum = sum + i; 
    }
    cout << sum;
}


int main(){

int num = 5;  

    sum(num); // sum(5)

    // sub(num);


    return 0;
}