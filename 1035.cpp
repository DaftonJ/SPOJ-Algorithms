#include <iostream>
#include <cstdio>

using namespace std;

int main (int argc, const char * argv[])
{
    int liczba, poprzednia = -1, wystapienia = 0;
    while (scanf("%d\n", &liczba) != EOF) {
        if (poprzednia != 42 && liczba == 42) {
            wystapienia++;
            if (poprzednia == -1) {
                wystapienia--;
            }
        }
        if (wystapienia == 3) {
            printf("%d\n", liczba);
            break;
        }
        printf("%d\n", liczba);
        poprzednia = liczba;
    }
    return 0;
}

