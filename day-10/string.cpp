#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str1= "hello";
    string str2= "jecrc";
    cout<< str1 << " " << str2 << endl;

    // methods of string
    // 1 lentg of string
    int n = str1.length();
    cout<<"length of string is : "<< n<< endl;

    // 2 append string
    cout << " after appneding string is: " << str1.append ("students")<< endl;

    // 3 empty string
    cout << " is string empty: " << str1.empty() << endl;

    // 4 concetination of string
    cout << "after concatinating string is :" << str1 + " bacho"<< endl;
    cout << "after concatinating string is 2:" << str1 << endl;

    //push_back method
    str2.push_back('u');
    cout<< "ater push_back method"<<str2<< endl;

    //pop_back method
    str2.pop_back();
    cout<< "ater pop_back method"<<str2<< endl;
    
    //at method
    char ch= str1.at(1);
    cout<< " character at index of 1 in str1 :" << ch << endl;
  
    //find()
    int index = str1.find("ello");
    cout<< " index of \"ello\" in str1 : "<< index << endl;
     
    //swap
    str1.swap(str2);
    cout<< " after swaping str1 and str2 :"<< endl;
    cout<< "str1: " << str1 << endl;
    cout<< "str2: " << str2 << endl;  

    //substr mwethod
    string subStr = str2.substr(5,6);
    cout<< "subsrtring of str2 from index 5 with length 6:" << endl;

    string str3;
    // cin >> str3;
    getline (cin, str3);
    cout<< "you entered :" << str3 << endl;

    return 0;
}