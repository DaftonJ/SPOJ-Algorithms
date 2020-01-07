#include <iostream>
    using namespace std;
    int t,n,x,y,ns;
    int main()
    {
            cin>>t;
            while(t != 0)
            {
            cin>>n>>x>>y;
            ns=n;
            n=1;
            while(n < ns)
            {
                    if(n%x == 0 && n%y != 0)
                    {
                    cout<<n<<" ";
                    n=n+1;
                    }else if(n%x != 0 || n%y == 0)
                    {
                    n=n+1;
                    }      
                   
            }
            cout<<""<<endl;
            t=t-1;
            }
    }

 
