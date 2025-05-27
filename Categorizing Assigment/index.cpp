#include <iostream>
#include <vector>
using namespace std;

// Selection Sort
void selectionSort(vector<int>& arr) 
{
    int n = arr.size();

    for(int i = 0; i < n - 1; ++i) 
    {
        int minIndex = i;

        for(int j = i + 1; j < n; j++)
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
            swap(arr[i], arr[minIndex]);
    }
}

// Merge Sort 
void merge(vector<int> &a, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid+1;


    while(left <= mid && right <= high)
    {
        if(a[left] <= a[right])
        {
            temp.push_back(a[left]);
            left++;
        }
     else{
       temp.push_back(a[right]);
       right++; 
        }
    }
  

    while(left <= mid)
    {
        temp.push_back(a[left]);
        left++;
    }

    while(right <= high)
    {
        temp.push_back(a[right]);
        right++;
    }


    for(int i=low; i<=high; i++)
    {
        a[i] = temp[i-low];
    }

}



void merge_sort(vector<int> &a, int low, int high){

    if(low >= high)
    {
        return;
    }
    
    int mid = (low+high) / 2;

    merge_sort(a, low, mid);

    merge_sort(a, mid+1, high);

    merge(a, low, mid, high);
}


// Linear Search
int linearSearch(vector<int>& arr, int search) 
{
    for(int i = 0; i < arr.size(); ++i)

        if(arr[i] == search)
        {
            return i;
        }
            
    return -1;
}

// Binary Search 
int binarySearch(vector<int>& arr, int search) 
{
    int low = 0, high = arr.size() - 1;

    while(low <= high) 
    {
        int mid = (low + high) / 2;

        if(arr[mid] == search)
        {
          return mid;  
        } 
        else if(arr[mid] < search) 
        {
         low = mid + 1;   
        }
        else {
          high = mid - 1;  
        }
    }
    return -1;
}

// Display Array
void printArray(vector<int>& arr) 
{
    for(int num : arr)
    {
       cout << num << " "; 
    }
    cout << endl;
}

int main() {
   
    int choice;

    while(choice != 5) {
        cout << "\n--- MENU ---\n";
        cout << "1. Selection Sort\n";
        cout << "2. Merge Sort\n";
        cout << "3. Linear Search\n";
        cout << "4. Binary Search (on sorted array)\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        

        switch(choice) {
            case 1:
               
                break;
            case 2:
                
                break;
            case 3:
                
                break;
            case 4:
              
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
