#include<iostream>
using namespace std;

int main()
{
	int z,x,w;
	char c;
	cin>>z;
	int tab[z];
	for(int i=0;i<z;i++)
	{
		cin>>x;
		tab[i]=x;
	}
	cin>>c>>w;
	
		if(c=='<')
		{
			for(int i=0;i<z;i++)
				if(tab[i]<w)
					cout<<tab[i]<<endl;
		}
		else if(c=='>')
		{
			for(int i=0;i<z;i++)
				if(tab[i]>w)
					cout<<tab[i]<<endl;
		}


	return 0;
}
