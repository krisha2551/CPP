#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "This is a Vehicle"<< endl;
    }
};

class Rent {
public:
    Rent() {
        cout << "Rent of Vehicle"<< endl;
    }
};

class Car : public Vehicle {
  public:
  Car() {
      cout << "This Vehical is a Car"<< endl;
  }
};

class Bus : public Vehicle, public Rent {
  public:
  Bus() {
      cout << "This Vehicle is a Bus with Rent";
  }
};

int main() {
    
   Bus obj2;

    return 0;
}
