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
        cout << "*************************************" << endl;
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


           void display(){
            for(int i=size-1; i>=0; i--)
            {
                cout << "| " << arr[i] << " |" <<endl;
            }
            cout << "-----" << endl;
        }

  
};



int main(){
Stack st(5);

int num = 20;

while( num > 0)
{
    int bi = num%2;
    st.push(bi);
    num = num/2;
}


st.display();



    return 0;
}
