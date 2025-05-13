#include<iostream>

using namespace std;


class Queue{

    public:

    int *arr;
    int capacity;
    int front;      //FRONT - track the first element of the queue
    int rear;       //REAR - track the last element of the queue
    int size;

    Queue(int capacity){
        this->capacity = capacity;
        arr = new int[this->capacity];
        this->front = -1;
        this->rear = -1;
        this->size = 0;
    }

    ~Queue(){
        delete [] arr;
        arr = NULL;
    }


    // Enqueue: Add an element to the end of the queue

    void enqueue(int ele){

        if(this->rear >= this->capacity-1)
        {
            cout << "Queue is Overflow...!" << endl;
        }
        else if(this->rear== -1 && this->front== -1)
        {
            this->front=0;
            this->rear=0;
            arr[this->rear] = ele;
            this->size++;
        }
        else{
            this->rear++;
            arr[this->rear] = ele;
            this->size++;
        }
    }


    // Dequeue: Remove an element from the front of the queue

    void dequeue(){
        if(this->front == -1)
        {
            cout << "Queue is Underflow...!" << endl;
        }
        else if(this->front == this->rear)
        {
            this->front=-1;
            this->rear =-1;
            this->size--;
        }
        else{
            this->front++;
            this->size--;
        }
    }

    void front1(){
        if(this->front == -1){
            cout << "Queue is Empty...!" << endl;
        }
        cout << "Front: " <<  arr[this->front] << endl;
    }

    void rear1(){
        if(this->rear == -1){
            cout << "Queue is Empty...!" << endl;
        }
        cout << "Rear: " << arr[this->rear] << endl;
    }

    // IsEmpty: Check if the queue is empty

    void isEmpty(){
        if(this->rear == -1 && this->front == -1){
            cout << "Queue is Empty...!" << endl;
        }
        else{
            cout << "Quue is not Emplty...!" << endl;
        }
    }

    // IsFull: Check if the queue is full

    void isFull(){
        if(this->rear >= this->capacity-1){
            cout << "Queue is  Full" << endl;
        }
        else{
            cout << "Queue is not full" << endl;
        }
    }

    void display(){
        cout << "------------------------" << endl;
        for(int i=this->front; i<=this->rear; i++)
        {
            cout << arr[i] << " ";
        }
         cout << endl << "------------------------" << endl;
    }

    void size1(){
        cout << "Queue size: " << this->size << endl;
    }


};

int main(){

    int choice, ele;

Queue line(5);


while(choice != 0)
{
    cout  << "*************************************" << endl << endl;;
    cout << "press 1 for Enque in Queue...!" << endl;
    cout << "press 2 for Deque in Queue...!" << endl;
    cout << "press 3 for Front in Queue...!" << endl;
    cout << "press 4 for Rear in Queue...!" << endl;
    cout << "press 5 for isEmpty in Queue...!" << endl;
    cout << "press 6 for isFull in Queue...!" << endl;
    cout << "press 7 for Display in Queue...!" << endl;
    cout << "press 8 for size in Queue...!" << endl;

    cout << "choice: ";
    cin >> choice;


    switch (choice)
    {
    case 1:
        cout << "ele: ";
        cin>> ele;
        line.enqueue(ele);
        break;
    case 2:
        line.dequeue();
        break;
    case 3:
        line.front1();
        break;
    case 4:
        line.rear1();
        break;
    case 5:
        line.isEmpty();
        break;
    case 6:
        line.isFull();
        break;
    case 7:
        line.display();
        break;
    case 8:
        line.size1();
        break;
    
    default:
        cout << "envalid choice...!" << endl;
        break;
    }
}


return 0;

}