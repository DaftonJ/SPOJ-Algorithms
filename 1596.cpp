#include <iostream>

using namespace std;

int main (int argc, const char * argv[])
{

    int zestaw, segmenty, wiek;
    int tab[10000] = {0};
    
    cin >> zestaw;
    while (zestaw) {
        cin >> segmenty;
        wiek = 0;
        for (int i = 0; i < segmenty; i++) {
            cin >> tab[i];
        }
        for (int i = 0; i < segmenty; i++) {
            wiek += tab[i];
        }
        cout << wiek + segmenty - 1 << endl;
        zestaw--;
    }
    return 0;
}

