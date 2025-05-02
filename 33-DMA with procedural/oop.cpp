#include<iostream>
using namespace std;


class myClass{

private:
    int size;
    int *arr;

    public:

        myClass(int size){
            this->size = size;
            arr = new int[this->size];

                if(arr==NULL)
                {
                 cout << "memory Allocation is failed...!" << endl;
                }
                else{
                 cout << "Memory Allocation is successfully...!" << endl;
                }
        }

        ~myClass(){
            delete[] arr;
            arr = NULL;

            if(arr==NULL)
                {
                 cout << "memory Deallocation is Successfull...!" << endl;
                }
                else{
                 cout << "Memory Deallocation is failed...!" << endl;
                }
        }


        void addElement(int index, int element)
        {
            if(index >= 0 && index < this->size)
            {
                arr[index] = element;
                cout << "element addes successfully...!" << endl;
            }
            else{
                cout << "index is out of bond..!" << endl;
            }
        }

    
        void getElement(int index){
            if(index >= 0 && index < this->size)
            {
                cout << arr[index] << endl;
            }
            else{
                cout << "index is out of bond..!" << endl;
            }
        }


};



int main(){

    myClass obj(6);

    obj.addElement(0, 77);
    obj.addElement(1, 99);


    obj.getElement(0);
    obj.getElement(1);
    obj.getElement(2);


    return 0;
}