#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

class LinkedList{
    public:
    Node *HEAD;
    int size;

    LinkedList(){
        this->HEAD = NULL;
        this->size = 0;
    }

    
    void addStartNode(int ele){
        Node *newNode = new Node();
        newNode->data = ele;
        newNode->next = this->HEAD;
        this->HEAD = newNode;
    }

    void addendNode(int ele){
        Node *newNode = new Node();
        newNode->data = ele;
        newNode->next = this->HEAD;
    }

    void printList(){
        Node *ptr = this->HEAD;
        while(ptr !=NULL)
        {
            cout << "->" << ptr->data ;
            ptr = ptr->next;
        }
        cout << endl;
    }
};

int main(){

    LinkedList list;

  cout << "press 1 for add node at begining of List...!" << endl;
  cout << "press 2 for add node at end of List...!" << endl;
  cout << "press 3 for add node at position of List...!" << endl;
  cout << "Press 4 for add node at position of List....!" << endl;
  cout << "Press 5 for add update node at position of List....!" << endl;
  cout << "Press 6 for add delete node at begining of List....!" << endl;
  cout << "Press 7 for add delete node at ending of List......!" << endl;
  cout << "Press 8 for add delete node at position of List.....!" << endl;


  int choice, ele, pos;


while(choice!=0)
{
    cout << "choice: ";
    cin >> choice;

switch(choice){ 
    case 1 : 
                cout << "ele: ";
                cin >> ele;
                list.addStartNode(ele);
            break;
    case 2 : 
                cout << "ele: ";
                cin >> ele;
                
            break;
    case 3 : 
            break;
    case 4 : 
            list.printList();
            break;
    default :
            break;
} 
}

    return 0;

}