    #include <iostream>
     
    using namespace std;
     
    int n; // ilosc liczb
    int k; // przesuniecie
    int tab[10000];
     
    int main()
    {
    cin >> n >> k;
    for (int i=0; i<n; i++) cin >> tab[i];
    for (int i=0; i<n; i++)
    if ((i+k) < n) cout << tab[i+k] << " ";
    else cout << tab[i+k-n] << " ";
    return 0;
    } 


