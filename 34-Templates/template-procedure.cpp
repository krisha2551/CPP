#include<iostream>
using namespace std;

template <typename T>


class Store{

    private:
    T size;
    T *arr;

    public:

    Store(T size){
        this->size = size;
        arr = new T[this->size];
        
        if(arr == NULL)
        {
            cout << "memeory Allocation failed...!" << endl;
        }
        else
        {
            cout << "memeory Allocation successfull...!" << endl;
        }
    }

    ~Store(){
        delete[] arr;
        arr = NULL;

        if(arr == NULL)
        {
            cout << "memeory Deallocation successfull...!" << endl;
        }
        else
        {
            cout << "memeory Dealocation failed...!" << endl;
        }

    }

    void addElement(T index, T ele){
        arr[index] = ele;
    }
    
    void showElement(){
        for(T i=0; i<size; i++)
        {
            cout << arr[i] << ", ";
        }
        cout << endl;
    }


};

int main(){

    Store <int> obj1(5);
    Store <int> obj2(4);


    obj1.addElement(0, 99);
    obj1.addElement(1, 88);
    obj1.addElement(2, 77);
    obj1.addElement(3, 66);

    obj1.showElement();
    obj2.showElement();


    return 0;
}