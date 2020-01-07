#include <iostream>

using namespace std;
void znak(char x,int y,int z)
{
  
   float wynik;
   switch(x)
   {
      case '*' : wynik = y*z;
                cout<<wynik<<endl;
               	break;
   
      case '+' : wynik = y+z;
				cout<<wynik<<endl;
               	break;

      case '-' : wynik = y-z;
				cout<<wynik<<endl;
               	break;
               
      case '/' : wynik = y/z;
				cout<<wynik<<endl;
               	break;

      case '%' : wynik = y%z;
				cout<<wynik<<endl;
            break;
   }
   
}



int main(){




char j ;
int l,k; 


while(cin >> j >> l >> k)

znak(j,l,k);




   return 0;   
}

