#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node *next;
    
    Node(int value) {
        this->data = value;
        this->next = NULL;
    }
};

// Linked List class
class LinkedList {
public:
    Node *HEAD;
    int size;


    LinkedList() {
        this->HEAD = NULL;
        this->size = 0;
    }

    // Insert at beginning
    void addStartNode(int data) {
        Node *newNode = new Node(data);
        newNode->next = this->HEAD;
        this->HEAD = newNode;
        this->size++;
    }

    void addEndNode(int data){
        Node *newNode = new Node(data);
        this->size++;
        if(this->HEAD == NULL)
        {
            newNode->next = this->HEAD;
            this->HEAD = newNode;
        }
        else
        {
            Node *ptr = this->HEAD;
            while(ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
    }

    // Search for a key
    void Search(int key) {
        Node *temp = HEAD;
        while (temp != NULL) {
            if (temp->data == key) {
                cout << "Value " << key << " found in the list." << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Value " << key << " not found in the list." << endl;
    }

    // Delete a node
     void delStartNode(){
        Node *ptr = this->HEAD;
        this->HEAD= ptr->next;
        ptr = NULL;
        this->size--;
    }


    void delEndNode(){
        Node *ptr = this->HEAD;
         
        while(ptr->next->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next  = NULL;
    }


    // Reverse the list
    void reverse() {
        Node *prev = NULL;
        Node *current = this->HEAD;
        Node *next = NULL;

        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        this->HEAD = prev;
        cout << "List reversed successfully." << endl;
    }

    // Display the list
    void display() {
        Node *temp = this->HEAD;
        cout << "Linked List: ";
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

// Main function
int main() {
    LinkedList list;
    int choice, value;

    while (choice != 0)
    {
        
        cout << endl << "--- MENU ---" << endl;
        cout << "1. Insert at Beginning" << endl;
        cout << "2. Insert at Ending" << endl;
        cout << "3. Search a Value" << endl;
        cout << "4. Delete a Value Beginning " << endl;
        cout << "5. Delete a Value Ending " << endl;
        cout << "6. Reverse List" << endl;
        cout << "7. Display List" << endl;
        cout << "8. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to insert: ";
            cin >> value;
            list.addStartNode(value);
            break;
        case 2:
            cout << "Enter value to insert: ";
            cin >> value;
            list.addEndNode(value);
            break;    
        case 3:
            cout << "Enter value to search: ";
            cin >> value;
            list.Search(value);
            break;
        case 4:
            cout << "Enter Start value to delete: ";
            cin >> value;
            list.delStartNode();
            break;
        case 5:
            cout << "Enter End value to delete: ";
            cin >> value;
             list.delEndNode();
            break;    
        case 6:
            list.reverse();
            break;
        case 7:
            list.display();
            break;
        case 8:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
        }
    } 

    return 0;
}
