#include<iostream>
#include<vector>
using namespace std;


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


void print_arr(vector<int> &a)
{
    for(int e : a)
    {
        cout << e << " ";
    }
    cout << endl;
}


 int main(){
    // vector<int> a = {38, 27, 43, 3, 9, 82, 10};
    // int size = 7;
    
    int size;
    cout << "size: ";
    cin >> size;
    
    vector<int> a;

    for(int i=0; i<size; i++)
    {
        cout << "a["<<i<<"]: ";
        int n;
        cin >> n;
        a.push_back(n);
        
    }

    merge_sort(a, 0,  size-1);

        print_arr(a);
 

 }