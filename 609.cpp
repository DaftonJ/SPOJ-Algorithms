#include <iostream>
#include <math.h>

using namespace std;

int main(){
	//pi = M_PI
	double r, d, rm, S;
	int min = 1;
	int max = 2000;
	cin>>r;
	cin>>d;
	S = (r*r - ((d*d) / 4)) * M_PI;
	cout<<S;
}
