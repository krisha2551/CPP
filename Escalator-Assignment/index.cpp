#include<iostream>
using namespace std;

class Stack{

    public:
    int top;
    int size;
    int capacity;
    int *arr;

    Stack(int capacity){
        this->capacity = capacity;
        this->arr = new int[this->capacity];
        this->top = -1;
        this->size = 0;
    }


    ~Stack(){
        delete[] arr;
        arr = NULL;
    }

        void push(int ele){

            if(this->size > this->capacity-1)
            {
                cout << "stack is FUll...!" <<endl;
                return;
            }
            this->top++;
            arr[this->top] = ele;
            this->size++;

        }

        void pop(){
            if(this->top < 0){
                cout<< "stack is Emptly...!" << endl;
                return;
            }
            this->top--;
            this->size--;
        }


        void peak(){
            cout << "|" << arr[this->top] << "|" << endl;
        }


        void isEmpty(){
            if(this->top < 0){
                cout << "isEmpty: TRUE" << endl;
            }
            else{
                cout << "isEmpty: FALSE" << endl;
            }
        }


        void isFull(){
            if(this->size > capacity-1){
                cout << "isFull: TRUE" << endl;
            }
            else{
                cout << "isFull: FALSE" << endl;
            }
        }

        void display(){
            for(int i=size-1; i>=0; i--)
            {
                cout << "| " << arr[i] << " |" <<endl;
            }
            cout << "-----" << endl;
        }

        void size1(){
            cout << "size: " << this->size << endl;
        }
};



int main(){


int capacity, choice, ele;

cout << "STack size: ";
cin >> capacity;

Stack st(capacity);



while (choice != 0)
{
    cout  << "*************************************" << endl << endl;;
    cout << "press 1 for Push in Stack...!" << endl;
    cout << "press 2 for pop in Stack...!" << endl;
    cout << "press 3 for peak in Stack...!" << endl;
    cout << "press 4 for isEmpty in Stack...!" << endl;
    cout << "press 5 for isFull in Stack...!" << endl;
    cout << "press 6 for display in Stack...!" << endl;
    cout << "press 7 for size in Stack...!" << endl;

    cout << "choice: ";
    cin >> choice;


    switch (choice)
    {
    case 1:
        cout << "ele: ";
        cin>> ele;
        st.push(ele);
        break;
    case 2:
        st.pop();
        break;
    case 3:
        st.peak();
        break;
    case 4:
        st.isEmpty();
        break;
    case 5:
        st.isFull();
        break;
    case 6:
        st.display();
        break;
    case 7:
        st.size1();
        break;
    
    default:
        break;
    }
}


    return 0;
}