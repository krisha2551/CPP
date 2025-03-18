#include<iostream>

using namespace std;

int main(){

// int size;
// cout << "size: ";
// cin >> size;


//   int arr[size];


//   for (int i = 0; i < size; i++)
//   {
//     cout << "arr[" << i << "]: ";
//     cin >> arr[i];
//   }
  

//   for(int i=0;i<size; i++)
//   {
//     cout << arr[i] << " ";
//   }
 

int array[5] = {20, 10, 30, 40, 5};

cout << "-------------------------" << endl;

for(int i=0; i<5; i++)
{
    cout << array[i] << " ";
}

cout << endl << "-------------------------" << endl;



int start, element, end;
cout << "start = ";
cin >> start;
cout << "end = ";
cin >> end;

for(int j=start; j<=end; j++)
{
cout << "element: ";
cin >> element;

array[j] = element;
}








for(int i=0; i<5; i++)
{
    cout << array[i] << " ";
}

cout << endl << "-------------------------" << endl;

    return 0;
}
