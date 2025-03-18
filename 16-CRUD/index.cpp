#include<iostream>

using namespace std;

//  "CRUD": Create, Read, Update, Delete

int main(){

    int size,choice;
    cout << "size:";
    cin >> size ;

    int arr[50];

    for(int i=0; i<size; i++)
    {
        cout << "arr[" << i <<"]:";
        cin >> arr[i];
    }

    while(choice !=0)
    {
        cout << endl << "----------------------------------" << endl;
        cout << "press 1 for Delete element" << endl;
        cout << "press 2 for Update element" << endl;
        cout << "press 3 for Insert element" << endl;
        cout << "press 4 for Read element" << endl;

        cout << "---------------------------------" << endl;
        cout << "Enter your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int ind;
            cout << "index:";
            cin >> ind;

            for(int i=ind; i<size-1; i++){
                arr[i] = arr[i+1];
            }
            size--;
        
            cout << "element deleted successfully...!" << endl;
            break;

        case 2: 
            int element, index;
            cout << "index: ";
            cin >> index;
            cout << "element: ";
            cin >> element ;

            arr[index] = element;

            cout << "element Updated successfully...!" << endl;
            break;

        case 3: 
            cout << "element Inserted successfully...!" << endl;
            break;

        case 4: 
            for(int i=0; i<size; i++)
            {
                cout << arr[i] << " ";
            }
            break;
            
        default: 
            cout << "invalide choice...!" << endl;
            break;

        
        }
    }

    return 0;
}
