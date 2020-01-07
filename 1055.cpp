#include <cstdio>
int n,t;
int tab[100];
int main()
{
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d",&n);
              for (int i=0;i<n;i++)
              {
                  scanf("%d",&tab[i]);
              }
              for (int i=1;i<n;i+=2)
              {
              printf("%d ",tab[i]);
              }              
              for (int i=0;i<(n-2);i+=2)
              {
                  printf("%d ",tab[i]);
              }
              if((n%2)==0) {printf("%d\n",tab[n-2]);}
              else {printf("%d\n",tab[n-1]);}
    }
}
