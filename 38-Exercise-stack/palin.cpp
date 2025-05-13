#include<iostream>
using namespace std;




class Stack{

    public:
    int top;
    int size;
    int capacity;
    char *arr;

    Stack(int capacity){
        this->capacity = capacity;
        this->arr = new char[this->capacity];
        this->top = -1;
        this->size = 0;
    }


    ~Stack(){
        delete[] arr;
        arr = NULL;
        cout << "*************************************" << endl;
    }




      void push(char ele){
            if(this->size > this->capacity-1)
            {
                cout << "stack is FUll...!" <<endl;
              
            }
            this->top++;
            arr[this->top] = ele;
            this->size++;
        }



        char pop(){
            if(this->top < 0){
                cout<< "stack is Emptly...!" << endl;
            }
            this->size--;
            return arr[this->top--];
            
        }



        void display(){
            for(int i=size-1; i>=0; i--)
            {
                cout << "| " << arr[i] << " |" <<endl;
            }
            cout << "-----" << endl;
        }

  
};


 string isPalendrome3(){
    Stack st(100);
    string str;
    cin >> str;

    for(char ch : str){
     st.push(ch);
    }

    for(char ch : str)
    {
           if(ch == st.pop()){
            continue;
          
            }
            else{
                return "not Palendrome";
            }
    }

    return "is Palendrom" ;

}


int main(){

  cout << isPalendrome3();


    return 0;
}
