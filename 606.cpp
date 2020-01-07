#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
int t;
int n;
int w[100];

cin >> t;
for (int i=1;i<=t;i++)
{
cin >> n;
for(int k=1;k<=n;k++)
{cin >> w[k];}

for (int m=n; m>=1; m--)
{cout << w[m] << " ";}
cout << endl;	
}
return 0;
}
