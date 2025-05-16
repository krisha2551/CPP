#include<iostream>
using namespace std;


void bubleSort(int arr[], int n);
void display(int arr[], int n);


int main(){
int n ;
cout << "size: ";
cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    display(arr, n);

    bubleSort(arr, n);


    return 0;
}


void bubleSort(int arr[], int n){
    for(int i=0; i<n; i++) // i = 0
    {
        for(int j=0; j<n-1; j++) // j = 0
        {
           if(arr[j] > arr[j+1])
           {
            int x = arr[j]; // 9
            arr[j] = arr[j+1]; // 3
            arr[j+1] = x; // 9
           }
        }
    }
    display(arr, n);
}


void display(int arr[], int n){
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
