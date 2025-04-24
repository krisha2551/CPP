#include <iostream>
using namespace std;

// Base class 1
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

// Base class 2
class Bird {
public:
    void fly() {
        cout << "This bird can fly." << endl;
    }
};

// Derived class from both Animal and Bird
class Bat : public Animal, public Bird {
public:
    void sleep() {
        cout << "This bat sleeps during the day." << endl;
    }
};

int main() {
    Bat myBat;

    myBat.eat();   // From Animal class
    myBat.fly();   // From Bird class
    myBat.sleep(); // From Bat class

    return 0;
}
