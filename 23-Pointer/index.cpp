#include <iostream>

using namespace std;



// int main(){
    

//     // int a = 10; // 4 bytes
//     // int b = a; // 4 bytes
//     // int c = b; // 4 bytes

//     int a = 10; // 4 bytes
//     int *b = &a; 
//     int **c = &b; 

//     // decimal // 0 -9
//     // hexa decimal 0-9, a- f
//     // octan
//     // binary

//     cout << &a<< endl;

    
//     cout << **c << endl;

//     cout << &c <<endl;


//         return 0;
// }



int main()
{
    int var1 = 3;
    int var2 = 24;
    int var3 = 17;

  
    cout << "Address of var1: "<< &var1 << endl;
    
    cout << "Address of var2: " << &var2 << endl;
    
    cout << "Address of var3: " << &var3 << endl;
}