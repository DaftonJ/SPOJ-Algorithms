#include <iostream>
#include <cstdio>

using namespace std;

int main (int argc, const char * argv[])
{
    int zestaw, l, c;
    scanf("%d\n", &zestaw);
    while (zestaw) {
        scanf("%d %d", &l, &c);
        l -= 1;
        if (l == 0) {
            puts("TAK");
            zestaw--;
            continue;
        } else if (l > c) {
            puts("TAK");
            zestaw--;
            continue;
        }
        if (c % l == 0) {
            puts("NIE");
        }else {
            puts("TAK");
        }
        zestaw--;
    }
    return 0;
}

