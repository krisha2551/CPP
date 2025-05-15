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

};


class Studentlist{
    public:
     vector<Student> list;

     void addStudent(int id ,string name){
        Student std( id , name);
        list.push_back(std);
     }

        void display() {
      for(Student s: list){
          cout << "ID: " << s.id << ", Name: " << s.name << endl;
      }
    }
};




int main(){

    Studentlist list;
    int choice, id;
    string naam;

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
                    cin >> naam;
                    list.addStudent(id, naam); 
            break;
            case 2: 
                    list.display(); 
            break;
            // case 3: 
            //        removeStudentId(); 
            // break;
            // case 4: 
            //         searchStudentId(); 
            // break;
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