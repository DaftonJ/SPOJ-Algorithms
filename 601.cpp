#include <iostream>

using namespace std;

int nwd(int a, int b)
{
	int c;
	while(b !=0)
	{
		c=a%b;
		a=b;
		b=c;
	}
	return a;
}

int main()
{
	int d,e,f,t;
	cin>>t;
	int tab[t];
	
	for(int i=0;i<t;i++)
	{
		cin>>d>>e;
		tab[i]=nwd(d,e);
	}
	
	for(int j=0;j<t;j++)	
		cout<<tab[j]<<endl;

	return 0;
}
