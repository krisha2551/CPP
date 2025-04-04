#include<iostream>

using namespace std;


int fourth(int n){
    return n; 
}

int third(int n){ 
    return n+fourth(n-1); 
} 
int second(int n) 
{
    return n+third(n-1); 
}

int first(int n){ 
    return n+second(n-1); 
}



int main(){
  // fourth(1) // third(2) //second(3)  // first(4);

  cout << first(4);

  // cout << 4 + second(3)
  // cout << 4 + 3 + third(2)
  // cout << 4 + 3 + 2 + fourth(1)
  // cout << 4 + 3 + 2 + 1;
  
}