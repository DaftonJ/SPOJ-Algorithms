#include <iostream>
#include <cstdio>

using namespace std;

int main (int argc, const char * argv[])
{
    int x;
    int sum = 0;
    while (cin >> x) {
        sum = sum + x;
        printf("%d\n", sum);
    }
    return 0;
}
