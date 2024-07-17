// Longest Arithematic SubArray

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, result = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 2, pd = arr[1] - arr[0], j = 2, current = 2;
    while (j < n)
    {
        if (pd == arr[j] - arr[j - 1])
        {
            current++;
        }
        else
        {
            pd = arr[j] - arr[j - 1];
            current = 2;
        }
        ans = max(current, ans);
        j++;
    }
    cout << ans;
    return 0;
}