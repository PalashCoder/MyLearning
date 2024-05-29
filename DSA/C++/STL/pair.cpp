#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, pair<int, char>> p = {27, {22, 'c'}};
    cout << p.first << " " << p.second.first << " " << p.second.second;

    // pair array
    pair<int, char> arr[] = {{1, 'a'}, {2, 'b'}, {3, 'c'}, {4, 'd'}};
    cout << arr[2].second;
    return 0;
}