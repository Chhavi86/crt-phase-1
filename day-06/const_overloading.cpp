#include<iostream>
using namespace std;

    class students
{
    // Access specifier
public:
    // Data members
    string name;
    int roll;
    //defualt constructor
    students(){
           name = "your name is pleaase";
           roll= 0;
    }
    //parametrical constructor
    students(string n,int roll){
           name = n;
           this->roll= roll;
    }

    // Member functions
     void show() 
     {
        cout << "name:"<<name<< endl;
        cout << "Roll No" << roll << endl;
         }
     };
     int main()
{
    //s1 objects calloing default constructor
    students s1;
    s1.show();

    //s2 objects calloing parametrized constructor
    students s2("chhavi",18);
    s2.show();
    return 0;
}