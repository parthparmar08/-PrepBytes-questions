#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <utility>

void oblivious()
{
    std::vector<int> v;
    std::map<int, int> m;
    std::set<std::pair<int, int> > s;
    for (int i = 0; i < 12; i++)
    {
        int x;
        std::cin >> x;
        m[x]++;
    }
    for (auto i : m)
    {
        s.insert(std::make_pair(i.second, i.first));
    }
    if (s.size() > 3)
    {
        std::cout << "no" << std::endl;
        return;
    }
    int cnt = 0;
    while (cnt < 3)
    {
        if (s.size() == 0)
        {
            std::cout << "no" << std::endl;
            return;
        }
        auto it = s.begin();
        if (it->first >= 4)
        {
            int z = it->first - 4;
            s.erase(it);
            int f = it->second;
            s.insert(std::make_pair(z, f));
            cnt++;
        }
        else
        {
            s.erase(it);
        }
    }
    std::cout << "yes" << std::endl;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int t = 1;
    std::cin >> t;

    while (t--)
    {
        oblivious();
    }
    return 0;
}