#include <iostream>
using namespace std;
 
class area
{
  private:
     int length;
     int width;
  public:
      // constructor
      area (int l , int w)
      {
        length = 1;
        width = w;
      }
      friend void showarea(area a);
};
    void showarea(area b)
    {
        cout<< "area of rect is :" << b.length * b.width << endl;
       }
   int main()
   {
    area a1(45, 7);
    showarea(a1);

    return 0;
   }    