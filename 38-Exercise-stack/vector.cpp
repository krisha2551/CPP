#include<iostream>
#include<vector>
using namespace std;


class Stack {
private:
    vector<int> arr;
    int capacity;

public:
    Stack(int capacity) {
        this->capacity = capacity;
    }

    void push(int ele) {
        if (arr.size() >= capacity) {
            cout << "Stack is FULL...!" << endl;
            return;
        }
        arr.push_back(ele);
    }

    void pop() {
        if (arr.empty()) {
            cout << "Stack is EMPTY...!" << endl;
            return;
        }
        arr.pop_back();
    }

    void peek() {
        if (arr.empty())
            cout << "|" << arr.back() << "|" << endl;
        else
            cout << "Stack is EMPTY...!" << endl;
    }

    void isEmpty() {
        
    }

    void isFull() {

    }

    void display() {
        for (int i = arr.size() - 1; i >= 0; --i) {
            cout << "| " << arr[i] << " |" << endl;
        }
    }

    void size1() {
        cout << "size: " << arr.size() << endl;
    }
};

int main(){
    int capacity,choice,ele;

    cout << "Stack size:";
    cin >> capacity;

    Stack st(capacity);

     while (choice != 0) {
        cout << "press 1 for Push in Stack...!" << endl;
        cout << "press 2 for Pop from Stack...!" << endl;
        cout << "press 3 for Peek in Stack...!" << endl;
        cout << "press 4 for isEmpty check...!" << endl;
        cout << "press 5 for isFull check...!" << endl;
        cout << "press 6 for Display Stack...!" << endl;
        cout << "press 7 for Stack Size...!" << endl;
        cout << "press 8 to Exit...!" << endl;

        cout << "choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "ele: ";
                cin >> ele;
                st.push(ele);
                break;
            case 2:
                st.pop();
                break;
            case 3:
                st.peek();
                break;
            case 4:
                st.isEmpty();
                break;
            case 5:
                st.isFull();
                break;
            case 6:
                st.display();
                break;
            case 7:
                st.size1();
                break;
            case 8:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice...!\n";
                break;
        }
    }


    return 0;
}