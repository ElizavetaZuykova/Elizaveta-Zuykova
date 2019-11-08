#include <iostream>
using namespace std;

int gcd (int x, int y)
{
    while (y)
    {
    int d = x % y;
    x = y;
    y = d;
    }
    return x;
}

int proper_fraction(int z)
 {
    int ans = 0;
    for (int i = 1; i < z; ++i)
    {
    if (gcd(i, z) == 1)
    {
    ++ans;
    }
    }
    return 2 * ans;
}
int main()
 {
    int z;
    cin >> z;
    cout << proper_fraction(z);
    return 0;
}
