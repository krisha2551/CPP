#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

 int main(){

Node *HEAD = new Node();


HEAD->data = 11;
HEAD->next = NULL;

Node *current = new Node();

current->data = 22; // 12345
current->next = NULL;
HEAD->next = current;

current = new Node(); // 234567
current->data = 33;
current->next = NULL;
HEAD->next->next = current;

current = new Node(); 
current->data = 44;
current->next = NULL;
HEAD->next->next->next = current;



// cout << "data: "  << HEAD->data << " address: " << HEAD->next << endl; // 1
// cout << "data: "  << HEAD->next->data << " address: " << HEAD->next->next << endl; // 2
// cout << "data: "  << HEAD->next->next->data << " address: " << HEAD->next->next->next << endl; // 3
// cout << "data: "  << HEAD->next->next->next->data << " address: " << HEAD->next->next->next->next << endl; // 4


Node *ptr = HEAD; // 1
while (ptr != NULL) // 1, 2, 3, 4->
{
    cout << "D: "  << ptr->data << "A: " << ptr->next << endl; // 1
    ptr = ptr->next; // 1->2, 2->3, 3->4
}






    return 0;
 }