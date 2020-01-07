#include <cstdio>
int x,y,n;
int nwd(int a, int b)
{
    if (b==0) {return a;}
    if (a==0) {return b;}
    if (a>b){a-=b;}
    else {b-=a;}
    return nwd(a,b);  
}
int main()
{
    scanf("%d",&n);
    while(n--)
    {
              scanf("%d %d",&x,&y);
              printf("%d\n",x*y/nwd(x,y));
    }
}
