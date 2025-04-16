#include<iostream>
#include<string.h>

using namespace std;


class Student{

    public:
        int grid;
        char name[10];
        static int couseCode;
};


class Mentor {

    public:
    int id;
    char post[10];
    static int couseCode;
};


int Student::couseCode = 2010;

int Mentor::couseCode = 1234;

int main(){

    Student st1,st2;

    st1.grid = 8145;
    strcpy(st1.name, "abc");

    
    st2.grid = 8561;
    strcpy(st2.name, "hfyt");


    cout << st1.grid << " "  << st1.name << " " << Student::couseCode << endl;
    
    cout << st2.grid << " "  << st2.name << " " << Mentor::couseCode << endl;

    
    return 0;
}