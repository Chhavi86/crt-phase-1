#include <iostream>
using namespace std;

class atm
{
private:
      int balance ;
      //encapsulation is  the process hiding the internal detail
public :
      void setbalance (int b);
      {
        this->balance =b;
      }
     // abstraction hiding the implementation
     void withdraw(int amount)
     {
        if(amoutn> balance)
        {
            cout<< "insufficient balance"<< endl;
        }
        else{
            balance -= amount;
            cout<< "successfully withdrawn "<< amount<< endl;
          }
     }
     //getter function or encapsulation
     int getbalance()
     {
        return balance;
     }

};
int main()
{
 atm a;
 a.setbalance(100000);
 a.withdraw(1500);

 cout << "balance is:" << a.getbalance() << endl;

 return 0;

}