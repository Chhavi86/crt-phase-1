#include<iostream>
using namespace std;

    class students
{
    // Access specifier
public:
    // Data members
    string name;
    int roll;
    
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
    students s1("chhavi",17);
    s1.show();
    return 0;
}