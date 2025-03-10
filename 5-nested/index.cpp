#include<iostream>

using namespace std;

int main()
{
    cout << "Press 1 for PIZZA" << endl;
    cout << "Press 2 for BURGER" << endl;
    cout << "Press 3 for SANDWITCH" << endl;
    cout << "Press 4 for PASTA" << endl;
    cout << "---------------------------" << endl;


    int type;
    int choice;
    cout << "---------------------------" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    cout << "---------------------------" << endl;

    if(choice == 1)
    {
        cout << "Press 1 for California Pizza" << endl;
        cout << "Press 2 for Italian Pizza" << endl;
        cout << "Press 3 for Greek Pizza " << endl;
        cout << "Press 4 for Cheesy 7 Pizza" << endl;
        cout << "---------------------------" << endl;
        cout << "Enter Type: ";
        cin >> type;

        if(type==1)
        {
            cout << "you oreder California Pizza" << endl;
        }
        else if(type==2)
        {
            cout << "your oredred Italian Pizza" << endl;
        }
        else if(type ==3)
        {
            cout << "you ordered  Greek Pizza" << endl;
        }
        else if(type == 4)
        {
            cout << "your oredred  Cheesy 7 Pizza" << endl;
        }
        else{
            cout << "This pizza type is not available ...!" << endl;
        }
        cout << "---------------------------" << endl;

    }
    else if(choice ==2)
    {
        cout << "Press 1 for falafel burger" << endl;
        cout << "Press 2 for tofu burger" << endl;
        cout << "Press 3 for black bean burger " << endl;
        cout << "Press 4 for quinoa burger" << endl;
        cout << "---------------------------" << endl;
        cout << "Enter Type: ";
        cin >> type;

        if(type==1)
        {
            cout << "you oreder  falafel burger" << endl;
        }
        else if(type==2)
        {
            cout << "your oredred  tofu burger" << endl;
        }
        else if(type ==3)
        {
            cout << "you ordered  black bean burger" << endl;
        }
        else if(type == 4)
        {
            cout << "your oredred quinoa burger" << endl;
        }
        else{
            cout << "This burger type is not available ...!" << endl;
        }
        cout << "---------------------------" << endl;

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