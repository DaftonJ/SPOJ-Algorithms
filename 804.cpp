#include <iostream>

using namespace std;

int main (int argc, const char * argv[])
{  
    int a, b;
    int zestaw;
    cin >> zestaw;
    while (zestaw) {
        cin >> a >> b;
        if ((a == 1 && b != 1) || (a != 1 && b == 1)) {
            cout << "2" << endl;
        }else {
        while (a != b) {
            if (a < b) {
                b -=  a;
            } else if(b < a) {
                a -= b;
            }
        }   
        cout << a+b << endl;
        }
        zestaw--;
    }  
    return 0;
}
