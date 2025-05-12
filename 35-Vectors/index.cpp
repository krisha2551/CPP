#include <iostream>
#include <vector>

using namespace std;

int main() {

  
  vector <int> v1 = {1, 2, 3, 4, 5};

 
  vector <int> v2{6, 7, 8, 9, 10};

 
  vector <int> v3(5, 12);

  cout << "vector1 = ";

 
  for (int i : v1) {
    cout << i << "  ";
  }

  cout << "\nvector2 = ";

 
  for (int i : v2) {
    cout << i << "  ";
  }

  cout << "\nvector3 = ";


  for (int i : v3) {
    cout << i << "  ";
  }

  return 0;
}