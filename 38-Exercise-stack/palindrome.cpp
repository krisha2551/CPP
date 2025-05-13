#include<iostream>
#include<string>
using namespace std;


void isPalendrome(){
    string str;

    cin >> str;

    // cout << str.size();
    string newstr;

    for(int i=str.size()-1; i>=0; i--){
        newstr= newstr + str[i];
    }

    if(str == newstr){
        cout << "is Palendrome" << endl;
    }
    else{
        cout << "not palendrome" <<endl;
    }
};


 string isPalendrome2(){
        
    string str;

    cin >> str;

    int i=0;
    int j = str.size()-1;

        while(i<str.size() && j >= 0)
        {
            if(str[i]==str[j]){
                i++;
                j--;
                continue;
            }
            else{
                return "not Palenderome";
            }

            // cout << str[j] ;
            // i++;
            // j--;
        }

        return "Palenderome";
        }




 int main(){

//  isPalendrome();


cout << isPalendrome2();

    return 0;
 }