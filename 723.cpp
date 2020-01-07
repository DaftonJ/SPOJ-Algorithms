#include <iostream>
#include <deque>
#include <cstdio>

using namespace std;


int main (int argc, const char * argv[])
{

    deque<int> q;
    int wartosc, rol, liczba, rozmiar;
    scanf("%d\n", &wartosc);
    while (wartosc) {
        scanf("%d", &rozmiar);
        
        for (int i = 0; i < rozmiar; i++) {
            scanf("%d", &liczba);
            q.push_back(liczba);
        }
        int l = q.front();
        q.push_back(l);
        q.pop_front();
        
        deque<int>::iterator i = q.begin();
        for (; i != q.end(); i++) {
            printf("%d ", *i);
        }
        q.clear();
        wartosc--;
    }
    
    for (int i = 0; i < rol; i++) {

        
    }
    printf("\n");
    return 0;
}

