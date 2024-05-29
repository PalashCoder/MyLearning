#include <bits/stdc++.h>
using namespace std;

int main()
{
    // key are unique not the values.,,,,stores unique keys in sorted order,,,, O(logn)
    map<int, int> mp;
    // first one is key, secont one is value

    for (auto it : mp)
    {
        cout << it.first << " " << it.second;
    }

    // Multimap, stores sorted but not unique keys
    multimap<int, int> mmp;

    // unordered map.... not sorted but unique keys,,,O(1),,,in worst O(n)
    unordered_map<int, int> unmp;

    return 0;
}