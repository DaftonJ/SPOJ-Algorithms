#include<iostream>
using namespace std;

int main()
{
	int c;//liczba kotow
	int k;//max udzwigu w kg
	int w; //waga jednego poczka
	int t; //testy
	
	cin>>t;
	string tab[t];
	for(int i=0;i<t;i++)
	{
		cin>>c>>k>>w;
		if(c*w>k)
			tab[i]="no";
		else
			tab[i]="yes";
	}
	
	for(int j=0;j<t;j++)
		cout<<tab[j]<<endl;
	return 0;
}
