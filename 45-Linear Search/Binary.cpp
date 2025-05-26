#include<iostream>
using namespace std;

// O(n) // 10
// O(log(n) // 3/4
// O(nlog(n)) // 13

// O(n^2) //100




int binary_search(int arr[],int low, int high, int search)
{
 
    if(low > high)
    {
        return -1;
    }

        int mid = (low+high)/2;
        
        if(arr[mid] == search)
        {
            return mid;
        }
        else if(arr[mid] > search) // [1, 2, 3, 4, 5] = 4;
        {
          return  binary_search(arr, low, mid, search);
        }
        else{
         return  binary_search(arr, mid+1, high, search);
        }

        return -1;
   
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

     int find = binary_search(arr, 0, size-1, search);
    cout << find << endl;


    if(find > 0)
    {
        cout << "Ele is found at index " << find << endl;
    }
    else{
        cout << "ele is not found...!";
    }


    return 0;
 }

 



// int binarySearch(int arr[], int x, int low, int high) {
  

//   while (low <= high) {
//     int mid = low + (high - low) / 2;

//     if (x == arr[mid])
//       return mid;

//     if (x > arr[mid])
//       low = mid + 1;

//     else
//       high = mid - 1;
//   }

//   return -1;
// }

// int main(void) {
//   int arr[] = {3, 4, 5, 6, 7, 8, 9};
//   int x = 4;
//   int n = sizeof(arr) / sizeof(arr[0]);
//   int result = binarySearch(arr, x, 0, n - 1);
//   if (result == -1)
//     printf("Not found");
//   else
//     printf("Element is found at index %d", result);
// }