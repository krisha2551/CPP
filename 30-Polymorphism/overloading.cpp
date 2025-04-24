#include <iostream>

using namespace std;

class ChargingStation {
public:
   
    void charge(int hours) {
        cout << "Charging small car for " << hours << " hours." << endl;
    }

   
    void charge(int hours, string type) {
        cout << "Charging large " << type << " for " << hours << " hours." << endl;
    }

 
    void charge(string type) {
        cout << "Charging " << type << " for 2 hours." << endl;
    }
};

int main() {
    ChargingStation station;

    station.charge(5);                        
    station.charge(8, "electric car");      
    station.charge("electric bike");          

    return 0;
}





// class Calculator {
// public:
    
//     int add(int a, int b) {
//         return a + b;
//     }

   
//     float add(float a, float b) {
//         return a + b;
//     }

 
//     int add(int a, int b, int c) {
//         return a + b + c;
//     }
// };

// int main() {
//     Calculator calc;

//     cout << "Add 2 and 3: " << calc.add(2, 3) << endl;
//     cout << "Add 2.5 and 3.7: " << calc.add(2.5f, 3.7f) << endl;
//     cout << "Add 1, 2, and 3: " << calc.add(1, 2, 3) << endl;

//     return 0;
// }
