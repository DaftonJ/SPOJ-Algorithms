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
            if (tab[i][j]!=tab[i][y] && r==1) //je�eli dwie por�wnywane litery s� r�ne
            {
                tab1[i][x]=tab[i][j];
                x++;
            }
            if (tab[i][j]!=tab[i][y] && r==2) //je�eli dwie litery ko�o siebie s� takie same, ale trzecia jest od nich r�na
            {
                tab1[i][x]=tab[i][j-1];
                x++;
                tab1[i][x]=tab[i][j];
                x++;
                r=1;
            }
            if (tab[i][j]!=tab[i][y] && r>2) //je�eli wi�cej ni� dwie litery ko�o siebie s� takie same
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

            if (tab[i][j]==tab[i][y]) //warunek oceniaj�cy ile liter pod rz�d si� powtarza
            {
                r++;
            }
        }
    }
    for(int i=0;i<t;i++)
        printf("%s\n", tab1[i]);
    return 0;
}
