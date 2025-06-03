#include <iostream>
#include <vector>
using namespace std;

// ---------------- Linked List ----------------
class Node{
    public:
    int data;
    Node *next;


    Node(int ele){
        this->data = ele;
        this->next = NULL;
    }

};

class LinkedList{
    public:
    Node *HEAD;
    int size;

    LinkedList(){
        this->HEAD = NULL;
        this->size = 0;
    }

    void addNode(int ele){
        Node *newNode = new Node(ele);
        newNode->next = this->HEAD;
        this->HEAD = newNode;
        this->size++;
    }


    void display() {
        Node *ptr = HEAD;
        cout << "Linked List: ";
        while (ptr) {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
};


// ---------------- Merge Sort ----------------
void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid+1;


    while(left <= mid && right <= high)
    {
        if(arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
     else{
       temp.push_back(arr[right]);
       right++; 
        }
    }
  

    while(left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }


    for(int i=low; i<=high; i++)
    {
        arr[i] = temp[i-low];
    }

}

void merge_sort(vector<int> &arr, int low, int high){

    if(low >= high)
    {
        return;
    }
    
    int mid = (low+high) / 2;

    merge_sort(arr, low, mid);

    merge_sort(arr, mid+1, high);

    merge(arr, low, mid, high);
}


// ---------------- Quick Sort ----------------
int part(vector<int> &arr, int low, int high)
{
        
        int last = arr[high];
        int i = low-1;

        for(int j=low; j<high; j++) // 0
        {
            if(arr[j] < last)
            {
                i++;

                swap(arr[i], arr[j]);

            }
        }

        swap(arr[i+1], arr[high]);

        return i+1;
}

void quick_sort(vector<int> &arr, int low, int high){

    if(low < high)
    {
      
    int p = part(arr, low, high);

        quick_sort(arr, low, p-1);
        quick_sort(arr, p+1, high);
    }

}

// ---------------- Binary Search ----------------
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

// ---------------- Menu Driven Program ----------------
int main() {
    LinkedList list;
    vector<int> array;
    int choice;

    while (choice != 0) {
        cout << endl << "===== MENU =====" << endl;
        cout << "1. Add to Linked List" << endl;
        cout << "2. Display Linked List" << endl;
        cout << "3. Enter Array" << endl;
        cout << "4. Merge Sort Array" << endl;
        cout << "5. Quick Sort Array" << endl;
        cout << "6. Binary Search in Array" << endl;
        cout << "7. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int ele;
            cout << "Enter element to add to Linked List: ";
            cin >> ele;
            list.addNode(ele);
            break;
        }
        case 2:
            list.display();
            break;
        case 3: {
            
            break;
        }
        case 4:
           
            break;
        case 5:
           
            break;
        case 6: {
           
            break;
        }
        case 7:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice.\n";
        }

    } 

    return 0;
}


