#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Create vector with 3 elements of value 100
    vector<int> v(3, 100);   // v = {100, 100, 100}

    // Add elements
    v.push_back(200);        // v = {100, 100, 100, 200}

    // Access elements
    cout << "v[2] = " << v[2] << endl;
    cout << "at(1) = " << v.at(1) << endl;
    cout << "front = " << v.front() << endl;
    cout << "back = " << v.back() << endl;

    // Use size, capacity, empty
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Is empty: " << (v.empty() ? "Yes" : "No") << endl;

    // Insert 500 at position 1
    v.insert(v.begin() + 1, 500); // v = {100, 500, 100, 100, 200}

    // Erase element at position 2
    v.erase(v.begin() + 2);       // v = {100, 500, 100, 200}

    // Resize to 6 elements
    v.resize(6); // adds 2 zeros

    // Reserve space for 10 elements
    v.reserve(10);

    // Shrink capacity to fit size
    v.shrink_to_fit();

    // Assign new values
    v.assign(4, 1);  // v = {1, 1, 1, 1}

    // Emplace and emplace_back
    v.emplace(v.begin(), 99);     // v = {99, 1, 1, 1, 1}
    v.emplace_back(88);          // v = {99, 1, 1, 1, 1, 88}

    // Use data() to get pointer
    int* ptr = v.data();
    cout << "First value using data(): " << *ptr << endl;

    // Use iterators
    cout << "Elements using iterator: ";
    for (auto it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << endl;

    // Clear vector
    v.clear();
    cout << "Size after clear: " << v.size() << endl;

    return 0;
}
