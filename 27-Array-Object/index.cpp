#include<iostream>
#include<string.h>

using namespace std;


class product{
    
    public:
        char name[10];
        int price;
        float rate;
};

int main(){

    int size;
    cout << "size:";
    cin >> size;

    product item [size];

    for(int i=0; i<size ; i++){
        cout << "name:";
        cin >> item[i].name;
        cout << "price:";
        cin >> item[i].price;
        cout << "rate:";
        cin >> item[i].rate;
    }

    for(int i=0; i<size; i++){
        cout << "-----------------------------------------------" << endl;
        cout << item[i].name << " | " << item[i].price << " | " << item[i].rate  << endl;
    }


     return 0;
}