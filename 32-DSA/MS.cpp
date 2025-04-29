
// Memory Structure : Stack, Global, Static, and Heap

#include <iostream>

using namespace std;

int globalVar = 10;  // Global (Static Segment)

void example() {
    static int staticVar = 20; // Static Segment
    int localVar = 30;         // Stack
    int* heapVar = new int(40); // Heap

    cout << "Global: " << globalVar << endl;
    cout << "Static: " << staticVar << endl;
    cout << "Local: " << localVar << endl;
    cout << "Heap: " << *heapVar << endl;

    delete heapVar;  // Free heap memory
}

int main() {
    example();
    return 0;
}
