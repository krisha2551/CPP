// There are 3 Types Access Modifiers:

// (1) public
// (2) private
// (3) protected

#include <iostream>

using namespace std;

class Person {
public:
    string name; // public - accessible anywhere

private:
    int age; // private - accessible only inside the class

protected:
    float mark; // protected - accessible in derived class

public:
    Person(string n, int a, float m) {
        name = n;
        age = a;
        mark = m;
    }

    void showDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;       // private - accessible here
        cout << "Mark: " << mark << endl;     // protected - accessible here
    }
};

class Student : public Person {
public:
    Student(string n, int a, float m) : Person(n, a, m) {

    }

    void showStudent() {
        cout << "Name (from base): " << name << endl;  // public - OK
        // cout << "Age: " << age << endl;             // Error - private
        cout << "Mark (from base): " << mark << endl;  // protected - OK
    }
};

int main() {

    Person p("Abc", 30, 89.5);
    p.showDetails();

    Student s("Def", 20, 95.0);
    s.showStudent();

    // cout << p.age;  //  Error - private
    // cout << p.mark; //  Error - protected
    cout << p.name << endl; //  OK - public

    return 0;
}
