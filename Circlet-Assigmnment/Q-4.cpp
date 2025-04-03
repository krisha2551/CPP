#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter number of row: ";
    cin >> n;

    for (int i = 1; i <= n; i++) 
    { 
        for (int s = 1; s <= i; s++) 
        { 
            cout << "  "; 
        }

         for (int s = 1; s <= n-i; s++) 
        { 
            if(s % 2==0){
                cout << s%2 << " ";
            
            }
            else{
                cout << s % 2 << " ";
            }
        }
        
        cout << endl;
    }

    return 0;
}