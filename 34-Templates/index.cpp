#include<iostream>
using namespace std;

template <typename T>

T sum(T a){
   return a*a;
}

int main(){

cout <<  sum<double>(2.5) << endl;

    return 0;
}