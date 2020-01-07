#include <iostream>
using namespace std;
int main()
{
int t;//iloœæ testów
cin >> t;//wprowadzamy t
for(int k =0;k<t;k++)
{
int n,m,s=0;//zmienne dziesiêtne do przechowania:liczba ob¿artuchów,iloœæ p¹czków w pude³ku,suma
cin >> n>>m;//wprowadzamy dane
int tab[n];//tablica na czasy
int tw[n];
for(int j =0;j<n;j++)
{
cin >> tab[j];
}
for(int i =0;i<n;i++)
{
tw[i]=86400/tab[i];
s+=tw[i];
}
if(s%m==0)
cout << s/m << endl;
else
cout << s/m+1 << endl;
}
}
