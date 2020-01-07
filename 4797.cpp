#include <iostream>
 
using namespace std;
 
int N; // ilosc tekstow do analizy
char tekst[5000]; // linijka tekstu
int j;
 
int main()
{
cin >> N;
cin.ignore();
for (int i=0; i<N; i++) {
cin.getline(tekst,5000);
j=0;
while ((tekst[j] != '\0') && (j<52)) {
cout << tekst[j];
j++; }
cout << endl;
}
return(0);
}
