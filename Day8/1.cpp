#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    double d, b, a, c, d1, d2;
    cout << "enter values of a,b,c";
    cin >> a >> b >> c;
    d = b * b - (4 * a * c);
    if (d > 0)
    {
        cout << "positive roots are";
        d1 = (-b + sqrt(d)) / (2 * a);
        d2 = (-b - sqrt(d)) / (2 * a);
        cout << "Roots are \n";
        cout << d1 << " " << d2 << endl;
    }
    else if (d == 0)
    {
        d1 = d2 = -b / (2 * a);
        cout << "Roots are \n";
        cout << d1;
    }
    else if(d<0)
    {
        d1 = -b / ((2 * a));
        d2 = sqrt(-d) / (2 * a);
        cout << "Roots are \n";
        cout << d1 << " + " << d2 << "i" << endl;

        cout << d1 << " - " << d2 << "i" << endl;
    }
    return 0;
}