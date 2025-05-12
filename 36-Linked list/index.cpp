#include<iostream>
using namespace std;


class Node{

    public:
    int data;
    Node *next;

};

 int main(){

Node *HEAD, *n2, *n3;

HEAD = new Node();

HEAD->data = 25;
HEAD->next = NULL;

n2 = new Node();

n2->data = 50;
n2->next = NULL;
HEAD->next = n2;

n3 = new Node();

n3->data = 75;
n3->next = NULL;
n2->next = n3;


cout << "data: " << HEAD->data << " address: " << HEAD->next << endl;
cout << "data: " << n2->data << " address: " << n2->next << endl;
cout << "data: " << n3->data << " address: " << n3->next << endl;




     return 0;
 }