#include<iostream>

using namespace std;

int main()
{


    cout << "Press 1 for PIZZA" << endl;
    cout << "Press 2 for BURGER" << endl;
    cout << "Press 3 for SANDWITCH" << endl;
    cout << "Press 4 for PASTA" << endl;
    cout << "---------------------------" << endl;



    int choice;
cout << "---------------------------" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    cout << "---------------------------" << endl;

    if(choice == 1)
    {
        cout << "your ordered PIZZA" << endl;
    }
    else if(choice ==2)
    {
        cout << "you ordered BURGER" << endl;
    }
    else if(choice == 3)
    {
        cout << "you ordered SANDWITCH" << endl;
    }
    else if(choice == 4 ){
        cout << "you ordred PASTA" << endl;
    }
    else{
        cout << "please select the valid choice...! " << endl;
    }

    cout << "---------------------------" << endl;

    return 0;
}