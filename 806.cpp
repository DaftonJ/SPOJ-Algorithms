#include <iostream>
 
using namespace std;
 
int main()
{
    int n,t;//zmienna pomocnicza i ilosc testów
    while(true)//nieskoñczona pêtla przerywana wprowadzeniem zera
    {
    cin >> t;//wprowadzamy zmienna
    if(t==0)//jeœli wprowadzono zero
        break;//przerywamy
    if(t<0)//jeœli mniejsze ni¿ zero
        n = t*(-1);//nadajemy zmiennej pomocniczej przeciwn¹ wartoœæ 
    if(t>0)//jeœli wiêksze od zera
        n=t;//nadajemy wartoœæ tak¹ sam¹
    char tab[400][400];//tablica znakowa dwuwymiarowa do "rysowania" wiatraczka
    for(int i = 0 ; i < 2*n ; i++)//przelatujemy przez wszystkie kolumny
    {
        for(int k = 0 ; k < 2*n ; k++)//przez wszystkie rzêdy
        {
            tab[i][k] = '.';//wstawiamy wszêdzie kropki
        }
    }
 
    if(t>0)//jeœli t jest wiêksze od zera
    {
        for(int i = 0,p=0 ; i < n ; i++,p++)
        {
        tab[n-p-1][n-p-1] = '*';
        for(int k = 1 ; k + p < n ; k++)
            tab[n-p-1][n-p-1-k] = '*';
        tab[n-p-1][n+p] = '*';
        for(int k = 1 ; k+p<n ; k++)
            tab[n-p-1-k][n+p] = '*';
        tab[n+p][n-p-1] = '*';
        for(int k = 1 ; k+p<n ; k++)
            tab[n+p+k][n-p-1] = '*';
        tab[n+p][n+p] = '*';
        for(int k = 1 ; k+p<n ; k++)
            tab[n+p][n+p+k] = '*';
    }
    }
    if(t<0)
    {
        for(int i = 0,p=0 ; i < n ; i++,p++)
        {
        tab[n-p-1][n-p-1] = '*';
        for(int k = 1 ; k+p< n ; k++)
            tab[n-p-1-k][n-p-1] = '*';
 
        tab[n-p-1][n+p] = '*';
        for(int k = 1 ; k+p<n ; k++)
            tab[n-p-1][n+p+k] = '*';
 
        tab[n+p][n-p-1] = '*';
        for(int k = 1 ; k+p<n ; k++)
            tab[n+p][n-p-1-k] = '*';
 
        tab[n+p][n+p] = '*';
        for(int k = 1 ; k+p<n ; k++)
            tab[n+p+k][n+p] = '*';
    }
    }
 
    for(int i = 0 ; i < 2*n ; i++)
    {
        for(int k = 0 ; k < 2*n ; k++)
        {
            cout << tab[i][k];
        }
        cout << endl;
    }
    }
 
    return 0;
}
