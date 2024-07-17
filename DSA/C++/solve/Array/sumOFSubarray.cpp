// Sum of all Subarrays
#include <iostream>
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
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = i; j < n; j++)
        {
            count += arr[j];
            result += count;
        }
    }
    cout << result;

    return 0;
}