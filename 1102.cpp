#include <iostream>
#include <cmath>
using namespace std;

int tablica[1000];
int main()
{
    ios_base::sync_with_stdio(0);
    int t,n;
    cin>>t;
    while(t--)
    {
              cin>>n;
              float suma=0,srednia=0,roznica,min_roznica;
              int j1,j2,odp;
              for(int i=0;i<n;i++)
              {
                       cin>>tablica[i];
                       suma+=tablica[i];
              }
              srednia=suma/n;
              roznica = tablica[0] - srednia;
              if(roznica < 0)roznica = -roznica;
              min_roznica = roznica;
              odp = 0;
              for(int j=1;j<n;j++){
                      roznica = tablica[j] - srednia;
                      if(roznica < 0)roznica = -roznica;
                      if(roznica < min_roznica){
                              min_roznica = roznica;
                              odp = j;
                      }
              }
              cout << tablica[odp] << endl;
    }
return 0;
} 

