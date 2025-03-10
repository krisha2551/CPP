#include<iostream>

using namespace std;

int main(){

int sensor;
cout << "press 1 for open" << endl;
cout << "press 0 for close" << endl;
cout << "choice: ";
cin >> sensor;

if(sensor==1)
{
    cout <<"please open the door ";
}
else if(sensor==0){
    cout <<"please close thedoor ...!";
}

return 0;

}