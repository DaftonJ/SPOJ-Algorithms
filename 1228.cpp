#include <iostream>
     
    #include<cmath>
     
    using namespace std;
     
    int main()
     
    {
    double x,a,b,c;
    cin>>a>>b>>c;
    if(a!=0)
    {
    x=(c-b)/a;
    cout.precision(2);
    cout<<fixed<< x;
    }
    else
    if(b==c)
    cout<<"NWR";
    else
    cout<<"BR";
    return 0;
    }
