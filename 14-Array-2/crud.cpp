#include<iostream>

using namespace std;

int main(){

int size, choice, index, element;
cout << "size: ";
cin >> size;

int arr[size];

for(int i=0; i<size; i++)
{
    cout << "arr[" << i << "]: ";
    cin >> arr[i];
}





while(choice!=0)
{
    cout << "-------------------------" << endl;

    cout << "press 1 for PRINT array" << endl;
    cout << "press 2 for UPDATE array" << endl;
    cout << "Choice: ";
    cin >> choice;
    
    switch (choice)
    {
        case 1 : cout << endl << "-------------------------" << endl;
                    for(int j=0; j<size; j++)
                    {
                         cout << arr[j] << " ";
                    }
                break;
        case 2 :
                   cout << "index: ";
                   cin >> index;
                   cout << "element: ";
                   cin >> element;
                   arr[index] = element;
                break;
        default :
                    cout << "invalid choice...!"  << endl;
    }
}





    return 0;
}