#include<iostream>
#include<string.h>

using namespace std;



class Student{

    public:
        int grid;
        char name[100];
        int age;
        char course[100];
        float percentage;
};



 int main(){


    Student student1, student2, student3;


    student1.grid = 1234;
    strcpy(student1.name, "Yashwi");
    student1.age = 22;
    strcpy(student1.course, "DSA");
    student1.percentage = 80.7;


    student2.grid = 2345;
    strcpy(student2.name, "jay");
    student2.age = 21;
    strcpy(student2.course, "CSS");
    student2.percentage = 82.7;


    student3.grid = 2345;
    strcpy(student3.name, "krisha");
    student3.age = 21;
    strcpy(student3.course, "javascript");
    student3.percentage = 82.7;

    cout << "----------------------------" << endl;


    cout << "grid: " << student1.grid << endl;
    cout << "name: " << student1.name << endl;
    cout << "age: " << student1.age << endl;
    cout << "course: " << student1.course << endl;
    cout << "percentage: " << student1.percentage << endl;


    cout << "----------------------------" << endl;

    cout  << "grid: "<< student2.grid << endl;
    cout  << "name: "<< student2.name << endl;
    cout  << "age: "<< student2.age << endl;
    cout  << "course: "<< student2.course << endl;
    cout  << "percentage: "<< student2.percentage << endl;

   
    cout << "----------------------------" << endl;

    cout  << "grid: "<< student3.grid << endl;
    cout  << "name: "<< student3.name << endl;
    cout  << "age: "<< student3.age << endl;
    cout  << "course: "<< student3.course << endl;
    cout  << "percentage: "<< student3.percentage << endl;

   
    cout << "----------------------------" << endl;

    return 0;
}