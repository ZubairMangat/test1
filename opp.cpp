#include <iostream>
using namespace std;
class example
{
private:
   static int sum;
   int x;

public:
   example()
   {
      sum = sum + 1;
      x = sum;
   }
   ~example()
   {
      cout << "Object Destroyed" << endl;
   }
   static void exforsys()
   {
      cout << "\nResult is: " << sum;
   }

   void number()
   {
      cout << "\nNumber is: " << x;
   }
};
int example::sum = 0;
int main()
{
   example e1;
   example::exforsys();
   example e2, e3, e4;
   example::exforsys();
   e1.number();
   e2.number();
   e3.number();
   e4.number();
}
