#include <iostream>

using namespace std;
long double a,b,c;

int main(){
    ios_base::sync_with_stdio(0);
    char z;
   while(cin>>a>>b>>c){ 
        
        b=b*b; 
        long double re=4*a*c;      
        if(b>re)cout<<"2\n"; 
        else if(b<re)cout<<"0\n"; 
        else cout<<"1\n"; 
    }
    return 0;
}
