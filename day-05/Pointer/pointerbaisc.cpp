#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    *ptr =200;
    cout << "Pointer stores address: " << ptr << endl;
    cout << "Value using pointer: " << *ptr << endl;

    return 0;
}