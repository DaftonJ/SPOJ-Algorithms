 #include <stdio.h>
    int main()
    {
    long long a,suma,sumaWielokrotna;
    a=sumaWielokrotna=0;
    while(scanf("%lld",&a)!=EOF)
    {
    suma=0;
    suma=suma+a;
    while(a!=0)
    {
    scanf("%lld",&a);
    suma=suma+a;
    }
    printf("%lld\n",suma);
    sumaWielokrotna=sumaWielokrotna+suma;
    }
    printf("%lld",sumaWielokrotna);
    return 0;
    } 
