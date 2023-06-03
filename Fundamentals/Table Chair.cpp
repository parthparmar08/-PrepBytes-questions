#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t, n, r1, r2, r3;
    cin >> t;
    while (t--)
    {
        cin >> n >> r1 >> r2 >> r3;
        n %= 4;
        if (n == 0)
            cout << "0\n";
        if (n == 3)
            cout << min(r1, min(r2 + r3, r3 + r3 + r3)) << "\n";
        if (n == 2)
            cout << min(r2, min(r1, r3) * 2) << "\n";
        if (n == 1)
            cout << min(r3, min(r1 + r2, r1 + r1 + r1)) << "\n";
    }
    return 0;
}