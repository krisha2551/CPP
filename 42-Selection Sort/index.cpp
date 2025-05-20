#include<iostream>
using namespace std;


void print_array(int arr[], int n){
    
    for(int i=0; i<n; i++)
    {
        cout << arr[i]  << " ";
    }
    cout << endl;
}

int main(){

    int arr[5] = {64, 25, 12, 22, 11};

    int n = 5;




     for(int i=0; i<n-1; i++)
     {
                int min_index = i;

                for(int j=i+1; j<n; j++)
                {
                    if(arr[j]< arr[min_index])
                    {
                        min_index = j;
                    }
                }

                int temp = arr[min_index];
                    arr[min_index] = arr[i];
                    arr[i] = temp;

     }

         print_array(arr, n);


    return 0;
}