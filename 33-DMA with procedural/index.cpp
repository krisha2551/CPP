#include<iostream>

using namespace std;

int main(){

    int *x, *y;

   x = new int(20);
   y = new int(30);

   if(x==NULL)
   {
    cout << "memory allocation is failed...!" << endl;
   }
   else{
    cout << "Memory Allocation is successfully...!" << endl;
   }



   cout << x << "   -    " << *x+*y << endl;


    delete x;
   x=NULL;
   if(x==NULL)
   {
    cout << "Memory deallocation is successfull...!" << endl;
   }
   else{
    cout << "Memeory deallocatoin is failed...!" << endl;
   }


    return 0;
}