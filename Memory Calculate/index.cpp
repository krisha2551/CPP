#include<iostream>
#include<string.h>
#include<vector>

using namespace std;


class Student{
    public:
    int id;
    string name;

    // Constructor
    Student(int id, string name){
        this->id = id;
        this->name = name;
    }

    // Display student info
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }


};


class Studentlist{
    public:
    vector<Student> list;

    // Add a student
    void addStudent(int id ,string name){
        Student std( id , name);
        list.push_back(std);
     }


    // Display all students
    void displayStudents() {
    cout << endl << "--- Student List ---" << endl;
    for (Student s : list) {
        s.display();
    }
}

    // Remove a student 
    void removeStudentId(int id) {
    cout << "Enter ID to remove: ";
    cin >> id;
    for (Student s : list ) {
        if (s.id == id ) {
            list.erase();
            cout << "Student removed successfully." << endl;
        }
    }
    cout << "Student not found." << endl;
}

    // Search for a student 
    void searchStudentId(int id) {
    cout << "Enter ID to search: ";
    cin >> id;
    for (Student s : list) {
        if (s.id == id ) {
            cout << "Student found: ";
        }
    }
    cout << "Student not found." << endl;
}
};




int main(){

    Studentlist list;
    int choice, id;
    string name;

    while(choice != 0){
        cout << endl << "--- Student Management System ---" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl ;
        cout << "3. Remove Student by ID" << endl;
        cout << "4. Search Student by ID" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:             
                    cout << "Enter ID: ";
                    cin >> id;
                    cout << "Enter Name: ";
                    cin >> name;
                    list.addStudent(id, name); 
            break;
            case 2: 
                    list.displayStudents(); 
            break;
            // case 3: 
            //         cout << "Enter ID to remove: ";
            //         cin >> id;
            //         list.removeStudentId(); 
            //  break;
            case 4: 
                
                   list.searchStudentId(id); 
            break;
            case 5: 
                    cout << "Exiting program." << endl; 
            break;
            default: 
                    cout << "Invalid choice. Please try again." << endl;
            break;
        }
    }
   
    return 0;
}