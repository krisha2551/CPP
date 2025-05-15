#include<iostream>
#include<string>
#include<vector>

using namespace std;

// Template class for Student
template<typename T>

class Student{
    public:
    T id;
    string name;

    // Constructor
    Student(T id, string name){
        this->id = id;
        this->name = name;
    }

    // Method to display student info
     void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

    // Vector to store students
    vector<Student<int>> list;

    
    // Add a student
    void addStudent() {
    int id;
    string name;
    cout << "Enter ID: ";
    cin >> id;
    cout << "Enter Name: ";
    cin >> name; 
    list.push_back(Student<int>(id, name));
    cout << "Student added successfully." << endl;
}

    // Display all students
    void displayStudents() {
    cout << endl << "--- Student List ---" << endl;
    for (int s : list) {
        s.display();
    }
}

    // Remove a student 
    void removeStudentId() {
    int id;
    cout << "Enter ID to remove: ";
    cin >> id;
    for ( ) {
        if ( ) {
            list.erase();
            cout << "Student removed successfully." << endl;
            return;
        }
    }
    cout << "Student not found." << endl;
}

    // Search for a student 
    void searchStudentId() {
    int id;
    cout << "Enter ID to search: ";
    cin >> id;
    for (int s : list) {
        if ( ) {
            cout << "Student found: ";
            s.display();
            return;
        }
    }
    cout << "Student not found." << endl;
}

int main(){

    int choice;

    do{
        cout << endl << "--- Student Management System ---" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl ;
        cout << "3. Remove Student by ID" << endl;
        cout << "4. Search Student by ID" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                    addStudent(); 
            break;
            case 2: 
                    displayStudents(); 
            break;
            case 3: 
                   removeStudentId(); 
            break;
            case 4: 
                    searchStudentId(); 
            break;
            case 5: 
                    cout << "Exiting program." << endl; 
            break;
            default: 
                    cout << "Invalid choice. Please try again." << endl;
        }
    }while (choice != 5);
   
    return 0;
}