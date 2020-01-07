#include <iostream>
#include <cstdio>
using namespace std;

int main (int argc, const char * argv[])
{
	int x,y,wynik;
    char c;
    int tab[10] = {0};
    while (cin >> c >> x >> y) {
        switch (c) {
            case '+':
                wynik = tab[x] + tab[y];
                printf("%d\n", wynik);
                break;
            case '-':
                wynik = tab[x] - tab[y];
                printf("%d\n", wynik);
                break;
            case '*':
                wynik = tab[x] * tab[y];
                printf("%d\n", wynik);
                break;
            case '/':
                wynik = tab[x] / tab[y];
                printf("%d\n", wynik);
                break;
            case '%':
                wynik = tab[x] % tab[y];
                printf("%d\n", wynik);
                break;
            case 'z':
                tab[x] = y;
                break;
            default:
                break;
        }
    }
    return 0;
}

