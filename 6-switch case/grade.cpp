#include <iostream>

using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    char grade;
    
    if (marks >= 90)
    {
        grade = 'A';
    }
        
    else if (marks >= 80)
    {
        grade = 'B';
    }
     
    else if (marks >= 70)
    {
        grade = 'C';
    }
        
    else if (marks >= 60)
    {
        grade = 'D';
    }
        
    else
    {
        grade = 'F';
    }
       

    switch (grade) {
        case 'A':
            cout << "Your grade is: A (Excellent)" << endl;
            break;
        case 'B':
            cout << "Your grade is: B (Very Good)" << endl;
            break;
        case 'C':
            cout << "Your grade is: C (Good)" << endl;
            break;
        case 'D':
            cout << "Your grade is: D (Satisfactory)" << endl;
            break;
        default:
            cout << "Your grade is: F (Fail)" << endl;
            
    }
    
    return 0;
}