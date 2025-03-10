#include<iostream>

using namespace std;

int main(){

    
    // * pattern printing 

    for (int i = 1; i <= 5; i++) 
    {
        for (int j = 1; j <= 3; j++) 
        {
           cout << " * ";
        }
        
        cout << endl;
    }
    cout << endl << "---------------" <<  endl;

    
    for(int i=1; i<=5; i++)
    {  
        for(int j=1; j<=5; j++)
        {
            cout << j << " ";
        }

        cout << endl; 
    }

    cout << endl << "---------------" <<  endl;


    for(int i=1; i<=5; i++)
     {  
         for(int j=1; j<=5; j++)
         {
             cout << i << " ";
         }
         cout << endl; 
     }

     cout << endl << "---------------" <<  endl;


    for(int i=1; i<=5; i++)
    {  
        for(int j=5; j>=1; j--)
        {
            cout << j << " ";
        }
        cout << endl; 
    }
    cout << endl << "---------------" <<  endl;


    return 0;
}