#include <iostream>

using namespace std;
class godzina
{
    public:
    int godzina;
    int minut;
};
godzina godzakt;
void dodajminuty (int min)
{
    godzakt.minut=godzakt.minut + min;
        while (godzakt.minut>59)
    {
        godzakt.godzina++;
        godzakt.minut=godzakt.minut-60;
    }
    while (godzakt.godzina >23) godzakt.godzina=godzakt.godzina-24;
    if (godzakt.godzina<10) cout << "," << "0"<< godzakt.godzina << ":";
    else cout << "," << godzakt.godzina << ":";
    if (godzakt.minut > 10 ) cout <<godzakt.minut;
    else cout << "0" << godzakt.minut;
}
int main()
{
    char znak;
    int dlugprzerwy;
    cin >> godzakt.godzina >> znak >> godzakt.minut;
    if (godzakt.godzina<10) cout << "0"<< godzakt.godzina << ":";
    else cout << "," << godzakt.godzina << ":";
     while (godzakt.minut>59)
    {
        godzakt.godzina++;
        godzakt.minut=godzakt.minut-60;
    }
    while (godzakt.godzina >23) godzakt.godzina=godzakt.godzina-24;
    if (godzakt.minut > 10 ) cout <<godzakt.minut;
    else cout << "0" << godzakt.minut;
    while (cin >> dlugprzerwy)
    {
        dodajminuty(45);
        dodajminuty(dlugprzerwy);
    }
    dodajminuty(45);
    return 0;
}
