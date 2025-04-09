#include<iostream>

using namespace std;

void add(int a[], int z){
    
    int sum = 0;

    for(int i=0; i<4; i++){
        sum = sum + a[i];
    }
}

void change(int z){
    int z = 20;

    cout << z << endl;
}


int main(){

    int arr[4] = {1,2,3,4};

    int z = 100;

    change(z);

    add(arr, z);

    return 0;
}