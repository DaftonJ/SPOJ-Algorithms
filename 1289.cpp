#include <iostream>
#include <string>
#include <cctype>
#include <cstdio>

using namespace std;

int main (int argc, const char * argv[])
{
    string line;
    bool zamieniaj = false;
    //char znak;
    //char tab[1001] = {'\0'};
    char ch;
    while ( (ch = cin.get() ) != EOF ) {
        
            if (ch == '<') {
                zamieniaj = true;
            }
            if (ch == '>' && zamieniaj) {
                zamieniaj = false;
            }

            if (zamieniaj && isalpha(ch) ) {
                printf("%c", toupper(ch));
            }
            else
                printf("%c", ch);
        
        
    }
    return 0;
}
