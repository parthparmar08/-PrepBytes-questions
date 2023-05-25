#include <iostream>
#include <vector>
#include <set>
#include <cmath>
using namespace std;

int ceil1(int x, int y)
{
    int r = x / y;
    if (x % y == 0)
    {
        return r;
    }
    else
    {
        return r + 1;
    }
}

void oblivious()
{
    int p, s1, s2;
    cin >> p >> s1 >> s2;
    if (s1 >= p || s2 >= p)
    {
        if (abs(s1 - s2) < 2)
        {
            cout << 2 - abs(s1 - s2) << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    else
    {
        if (p - s1 >= p - s2)
        {
            if (p - s1 >= 2)
            {
                cout << p - s2 << endl;
            }
            else
            {
                cout << p - s2 + 2 - (p - s1) << endl;
            }
        }
        else
        {
            if (p - s2 >= 2)
            {
                cout << p - s1 << endl;
            }
            else
            {
                cout << p - s1 + 2 - (p - s2) << endl;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        oblivious();
    }

    return 0;
}