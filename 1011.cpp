#include <cstdio>
#include <cstring>
char ciag[2002];
int n,dl;
int main()
{
    scanf("%d",&n);
    while(n--)
    {
              scanf("%s",&ciag);
              dl=((strlen(ciag))/2);
              for (int i=0;i<dl;i++)
              {
                  printf("%c",ciag[i]);
              }
              printf("\n");
    }
}
