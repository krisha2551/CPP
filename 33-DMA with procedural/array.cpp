#include<iostream>

using namespace std;

int main(){

    int *arr , size;

   cout << "Enter the size of the array:";
   cin >> size;

   arr = new int[size];

   if(arr == NULL)
   {
    cout << "Memory Allocation is failed...!" << endl;
   }
   else{
    cout << "Memory Allocation is successfully...!" << endl;
   }


    delete[] arr;
  

    return 0;
}