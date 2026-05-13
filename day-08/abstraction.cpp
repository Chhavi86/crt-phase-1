//hiding implimentation from user
#include <iostream>
using namespace std;

class atm
{
private:
      int balance ;
public :
      atm()
      {
        balance =16000;
      }
      void withdraw (int amount)
      {
        if (amount> balance)
        {
            cout<<"insufficent balance"<< endl;
        }
        else
        {
            balance-= amount;
            cout<<"successfully withdrawn"<< amount << endl;  
              }
      }
      void showbalance()
    {
        cout << "Current balance: " << balance << endl;
    }
};
      int main()
      {
        atm a;
        a.withdraw(400);
        a.showbalance();
        return 0;
      }




