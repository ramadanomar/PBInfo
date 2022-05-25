#include <iostream>
#include <cmath>
using namespace std;

int kpn(int a, int b, int k)
{
    int x = a;
    while (x <= b && k > 0)
    {
        int s = 1 + x;
        for (int d = 2; d * d <= x; ++d)
        {
            if (x % d == 0)
            {
                s += d;
                if (d * d < x)
                    s += x / d;
            }
        }

        if (x % 2 == s % 2) --k;
        ++x;
    }

    if (k != 0)
        return -1;

    return x-1;
}

int main() {
    cout << kpn(27,50,3);
}
