  #include <stdio.h>
    int main(void){
    int d,n;
    scanf("%d", &d);
    while(d--){
    scanf("%d", &n);
    if(n>9) printf("0 0\n");
    if(n<2) printf("0 1\n");
    if(4<n && n<7) printf("2 0\n");
    if(n==2) printf("0 2\n");
    if(n==3) printf("0 6\n");
    if(n==4) printf("2 4\n");
    if(n==7) printf("4 0\n");
    if(n==8) printf("2 0\n");
    if(n==9) printf("8 0\n");
    }
    return 0;
    } 
