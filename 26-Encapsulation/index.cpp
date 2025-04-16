#include<iostream>
#include<string>

using namespace std;

class Student {

   private:
        string name; 
        int rollNo;  
        int age;     
        float marks;  
        float fees;   

    public:
       
        Student() 
        {
            name = "";
            rollNo = 0;
            age = 0;
            marks = 0.0;
            fees = 0.0;
        }

        void setDetails(string name, int rollNo, int age, float marks, float fees) 
        {
            this->name = name;   
            this->rollNo = rollNo; 
            this->age = age;      
            this->marks = marks; 
            this->fees = fees;    
        }

       
        void displayDetails() 
        {
            cout << "Student Details:" << endl;
            cout << "Name: " << this->name << endl;
            cout << "Roll Number: " << this->rollNo << endl;
            cout << "Age: " << this->age << endl;
            cout << "Marks: " << this->marks << endl;
            cout << "Fees: " << this->fees << endl;
        }
};

int main() {
    
    Student student1, student2;
  
    
    student1.setDetails("Priya", 101, 20, 85.5, 1500.75);

  
    student2.setDetails("Geeta", 102, 21, 90.0, 1600.50);

    student1.displayDetails();
    cout << endl;
    student2.displayDetails();
    cout << endl;

    return 0;
}