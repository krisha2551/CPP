#include <iostream>

using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic shape." << endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
public:
    void draw(){
        cout << "Drawing a circle with radius." << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
public:
    void draw(){
        cout << "Drawing a rectangle with length and width." << endl;
    }
};

// Derived class: Triangle
class Triangle : public Shape {
public:
    void draw(){
        cout << "Drawing a triangle with 3 sides." << endl;
    }
};

int main() {

    Shape* shape;  // Base class pointer

    Circle circle;
    Rectangle rectangle;
    Triangle triangle;

    shape = &circle;
    shape->draw();  // Circle's draw()

    shape = &rectangle;
    shape->draw();  // Rectangle's draw()

    shape = &triangle;
    shape->draw();  // Triangle's draw()

    return 0;
}
