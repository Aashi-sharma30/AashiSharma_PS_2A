#include <iostream>
using namespace std;
int main()
{
    int n, sum1 = 0, sum2 = 0, r1, r2;
    cout << "Enter the value of n \n";
    cin >> n;
    while (n > 0)
    {
        r1 = n % 10;
        sum1 += r1;
        n = n / 10;
    }
    while (sum1 > 0)
    {
        r2 = sum1 % 10;
        sum2 += r2;
        sum1 = sum1 / 10;
    }
    cout << sum2;

    return 0;
}
