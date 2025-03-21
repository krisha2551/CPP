#include<iostream>

using namespace std;

// Using the while loop, count the total digits in a number

// int main()
// {
//    int num, tot=0;

//    cout<<"Enter the Number: ";
//    cin>>num;

//    while(num>0)
//    {
//       tot++;
//       num = num/10;
//    }
//    cout<<"Total Digits = "<<tot;
//    cout<<endl;

//    return 0;
// }



// Count Digits in a Number using the for Loop

int main()
{
   int num, tot;

   cout<<"Enter the Number: ";
   cin>>num;

   for(tot=0; num>0; tot++)
    {
        num = num/10; 
    }
    cout<<"Total Digits = "<<tot;
    cout<<endl;
   
   
   return 0;
}