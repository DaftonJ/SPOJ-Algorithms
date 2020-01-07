#include <cstdio>
#include <cstring>

int main()
{
    int t, x, y, r;
    char tab[55][205];
    char tab1[55][205];
    char p[5];
    scanf("%d", &t);
    for(int i=-1;i<t;i++)
        fgets(tab[i],205,stdin);
    for(int i=0;i<t;i++)
    {
        x=0;
        y=0;
        r=1;
        for(int j=0;j<strlen(tab[i])-1;j++)
        {
            y++;
            if (tab[i][j]!=tab[i][y] && r==1) //je¿eli dwie porównywane litery s¹ ró¿ne
            {
                tab1[i][x]=tab[i][j];
                x++;
            }
            if (tab[i][j]!=tab[i][y] && r==2) //je¿eli dwie litery ko³o siebie s¹ takie same, ale trzecia jest od nich ró¿na
            {
                tab1[i][x]=tab[i][j-1];
                x++;
                tab1[i][x]=tab[i][j];
                x++;
                r=1;
            }
            if (tab[i][j]!=tab[i][y] && r>2) //je¿eli wiêcej ni¿ dwie litery ko³o siebie s¹ takie same
            {
                tab1[i][x]=tab[i][j-(r-1)];
                x++;
                sprintf(p, "%d", r);
                if (r<10)
                {
                    tab1[i][x]=p[0];
                    x++;
                }
                else if (r>=10 && r<100)
                {
                    tab1[i][x]=p[0];
                    x++;
                    tab1[i][x]=p[1];
                    x++;
                }
                else if (r>=100)
                {
                    tab1[i][x]=p[0];
                    x++;
                    tab1[i][x]=p[1];
                    x++;
                    tab1[i][x]=p[2];
                    x++;
                }
                r=1;
            }

            if (tab[i][j]==tab[i][y]) //warunek oceniaj¹cy ile liter pod rz¹d siê powtarza
            {
                r++;
            }
        }
    }
    for(int i=0;i<t;i++)
        printf("%s\n", tab1[i]);
    return 0;
}
