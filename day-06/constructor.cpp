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

    // Member functions
     void show() 
     {
        cout << "name:"<<name<< endl;
        cout << "Roll No" << roll << endl;
         }
     };
     int main()
{
    students s1;
    s1.name = "Saurav";
    s1.roll = 18;
    s1.show();
    return 0;
}