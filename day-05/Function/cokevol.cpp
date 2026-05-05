// write a  function that take numbers of coke contianer .you have to print total voulmme of containers if in each bottle has 250ml.
//no argue ,no return


#include <iostream>
using namespace std;

void totalVolume() {
    int bottles;
    cout << "Enter number of bottles: ";
    cin >> bottles;

    int volume = bottles * 250;
    cout << "Total volume = " << volume << " ml" << endl;
}

int main() {
    totalVolume();  // function call
    return 0;
}