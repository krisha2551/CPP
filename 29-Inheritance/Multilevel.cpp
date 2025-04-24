#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal eats food." << endl;
    }
};

// Derived class from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

// Derived class from Dog
class Puppy : public Dog {
public:
    void weep() {
        cout << "Puppy weeps." << endl;
    }
};

int main() {
    Puppy myPuppy;

    myPuppy.eat();   // Inherited from Animal
    myPuppy.bark();  // Inherited from Dog
    myPuppy.weep();  // Defined in Puppy

    return 0;
}

