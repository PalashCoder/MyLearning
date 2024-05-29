#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4};
    sort(a, a + 4);
    vector<int> v;
    sort(v.begin(), v.end());

    // sort in decending order

    sort(a, a + 4, greater<int>);

    // in myway sorting we have to write a comperator which returns boolean

    sort(a, a + n, comp);

    // builtinpop count returns that how many bits are there in set mode
    // like if value=7,, means in binary its= 111,,, then set bits are 3

    int num = 7;
    int setbit = __builtin_popcount(num);

    // next_permutation() function enables us to take the next permutation of the given set in a dictionary manner

    return 0;
}