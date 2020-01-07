#include <iostream>
#include <cmath>
using namespace std;

int main (int argc, const char * argv[])
{

    double i;
    while (cin >> i) {
        if (i == 1) {
            cout << 0 << endl;
            continue;
        }
        double c = (i - 1)*2.0;
        c = -c;
        double delta = 1.0 - 4.0*c;
        double x1 = (-1.0 + sqrt(delta))/2.0;
        double x2 = (-1.0 - sqrt(delta))/2.0;
        if (x1 > 0) {
            cout << static_cast<int>(ceil(x1)) << endl;
        }else if (x2 > 0) {
            cout << static_cast<int>(ceil(x2)) << endl;
        }
    }
    return 0;
}
