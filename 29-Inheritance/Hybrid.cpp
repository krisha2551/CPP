#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal eats food." << endl;
    }
};

// Derived class 1
class LandAnimal : public Animal {
public:
    void walk() {
        cout << "LandAnimal walks." << endl;
    }
};

// Derived class 2
class Bird : public Animal {
public:
    void fly() {
        cout << "Bird flies." << endl;
    }
};

// Derived class from both LandAnimal and Bird 
class Bat : public LandAnimal, public Bird {
public:
    void sound() {
        cout << "Bat makes sound." << endl;
    }
};

int main() {
    Bat myBat;

    myBat.LandAnimal::eat();  // or myBat.Bird::eat();
    myBat.walk();         // From LandAnimal
    myBat.fly();          // From Bird
    myBat.sound();        // From Bat

    return 0;
}

