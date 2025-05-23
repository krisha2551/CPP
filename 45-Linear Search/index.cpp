#include<iostream>
using namespace std;

int linear_search(int arr[], int search)
{
   int index = -1;

    for(int i=0; i<5; i++)
    {
        if(arr[i] == search)
        {
            index = i;
            return index;
        }
    }
    return index;
}

 int main(){
        int size, search;
   cout << "size: ";
   cin >> size;

   int arr[size];

   for(int i=0; i<size; i++)
   {
    cout << "arr["<< i << "]: ";
    cin >> arr[i];
   }

   cout << "Search: ";
   cin >> search;


    int find = linear_search(arr, search);


    if(find > 0)
    {
        cout << "Ele is found at index " << find << endl;
    }
    else{
        cout << "ele is not found...!";
    }


    return 0;
 }