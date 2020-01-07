#include <iostream>
 
using namespace std;
 
int t, xa, ya, xb, yb, xc, yc;
 
main ()
{
     cin >> t;
     for (int a = 0; a < t; a++)
     {
         cin >> xa >> ya >> xb >> yb >> xc >> yc;
         int suma = xa * yb + xb * yc + xc * ya - xc * yb - xb * ya - xa * yc;
         if (suma == 0)
         cout << "TAK\n";
         else
         cout << "NIE\n";
     }
}
