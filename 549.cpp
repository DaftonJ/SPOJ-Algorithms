#include<iostream>

using namespace std;
int main ()
{
	int test,ilosc,suma,x;
	suma=0;
	cin>>test;
	for (int i=0;i<test;i++)
	{
		cin>>ilosc;
		for(int j=0;j<ilosc;j++)
		{
			cin>>x;
			suma=suma+x;
		}
		cout<<suma<<endl;
		suma=0;
	}
	return 0;
}
