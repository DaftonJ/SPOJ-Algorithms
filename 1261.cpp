#include<iostream>

using namespace std;

char sprawdzenie(string q)
{
	char odp; int a;
a=int(q[0])*1 + int(q[1])*3 + int(q[2])*7 + int(q[3])*9;
a=a+ int(q[4])*1 + int(q[5])*3 + int(q[6])*7 + int(q[7])*9;
a=a+  int(q[8])*1 + int(q[9])*3 + int(q[10])*1;

if(a%10==0)
odp='D';
else
odp='N';
	return odp;
}


int main ()
{
	int test;
	cin>>test;
	string p;
	for(int i=0;i<test;i++)
	{
		cin>>p;
		cout<<sprawdzenie(p)<<endl;
	}
	
	return 0;
}
