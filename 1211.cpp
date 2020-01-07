#include <iostream>
using namespace std;
int main()
{
    unsigned number;
   
    cin >> number;
   
    if ( number == 1 || number == 2)
    {
        std::cout << "NIE";
    }
    else
    {
        for ( unsigned i = 1; i <= number; i += 2)
        {
           cout << i <<" ";
        }
        for ( unsigned i = 0; i <= number; i += 2)
        {
           cout << i <<" ";
        }
    }
   
    return 0;
}
