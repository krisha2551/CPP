#include<iostream>

using namespace std;


int first(int n){ // n=10
    return n*n; // 16 // 100
}

int cube(int n){
    return n*n;
}


int main(){
 int num = 4;



   cout << "power of " <<  first(num) << endl;
   cout << "power of " <<  first(10) << endl; //10
   cout << "------------------" << endl;
   cout << "cube: " << cube(8) << endl;
    
}