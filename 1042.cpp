#include <iostream>

using namespace std;

int main (int argc, const char * argv[])
{
    int tab[200][200] = {0};
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> tab[i][j];
        }
    }
    for (int j = 0; j < b; j++) {
        for (int i = 0; i < a; i++) {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
