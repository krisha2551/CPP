// Abstract Class and Pure Virtual Function

#include <iostream>

using namespace std;

// Abstract class
class Engine {
public:
    // Pure virtual function
    virtual void start() = 0;

    // Common method
    void stop() {
        cout << "Engine stopped." << endl;
    }
};

// Derived class: PetrolEngine
class PetrolEngine : public Engine {
public:
    void start(){
        cout << "Petrol engine started.  Do Voice!" << endl;
    }
};

// Derived class: ElectricEngine
class ElectricEngine : public Engine {
public:
    void start(){
        cout << "Electric engine started.  Silent mode!" << endl;
    }
};

int main() {

    PetrolEngine petrol;
    ElectricEngine electric;

    petrol.start();
    petrol.stop();

    electric.start();
    electric.stop();

    return 0;
}
