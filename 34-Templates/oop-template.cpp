#include<iostream>
using namespace std;


template <typename T1, typename T2>

class Cal{

    public:
    Cal( T1 x , T2 y){
        cout << x+y << endl;
    }
};


int main(){

Cal<double, double> obj1(2.45, 1.6932);

    return 0;
}