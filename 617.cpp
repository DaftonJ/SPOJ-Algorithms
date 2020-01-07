#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int t, n1, n2, n;
string a, b, ret;

int main()
{
    scanf("%d", &t);
    while(t--)
    {
        cin >> a >> b;
        n1 = a.size();
        n2 = b.size();
        if(n1 == 0)
            ret = b;
        else if(n2 == 0)
            ret = a;
        else
        {
            n = (n1 < n2) ? n1 : n2;
            for(int i = 0; i < n; i++)
            {
                ret.append(1, a[i]);
                ret.append(1, b[i]);
            }
        }
        cout << ret << endl;
        ret.clear();
    }
    return 0;
}
