//write a cpp program ki create a students magnagement system where we store and display a student details 
//name , roll no. , email, mobile no., batch ,crt class no.
//using const overloading 
#include<iostream>
using namespace std;

    class students
{
    // Access specifier
public:
    // Data members
    string name;
    int roll;
    string email;
    int mobile ;
    string batch;
    string crt_batch_no.;

    //defualt constructor
    students(){
           name = "your name  pleaase";
           roll= 0;
           email="you email please";
           mobile=0;
           batch="your batch please";
           crt_batch_no.="you crt batch no. please";

    }
    //parametrical constructor
    students(string n,int roll,string email, int mobile , string batch, string ){
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