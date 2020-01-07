#include <iostream>
//#include <conio.h>

using namespace std;

int main()
{
   long long int t, a, b;
   cin >> t;
    
    while(t--)
    {
         cin >> a >> b;
         if(b == 0)
         {
         cout << 1<<endl;
         }
         else
         {
         long long int x = 1;
         long long int cyfry[12];   
         long long int d = a%10;
         long long int c  = d;
         cyfry[1] = c;
         c *= d;
         c = c%10;
         
         do
         {
          x++;
          cyfry[x] = c;
          c *= d;
          c = c%10;
         }
         while(cyfry[1] != cyfry[x]);
         x--;
         cyfry[0] = cyfry[x];
         cout << cyfry[b%x]<<endl;
         }    
    }
    
    
return 0;   
}
