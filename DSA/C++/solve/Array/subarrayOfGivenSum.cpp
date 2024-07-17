// SubArray of Given Sum
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int num;
    cin >> num;
    int start, end, currentSum = 0;

    for (int i = 0; i < n; i++)
    {
        start = i, end = i;
        currentSum = arr[start] + arr[end];
        while (currentSum + arr[end] < num)
        {
            end++;
            currentSum += arr[end];
        }
    }

    return 0;
}