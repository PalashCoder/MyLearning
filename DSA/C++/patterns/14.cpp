#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char j = 'A'; j <= 'A'+i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        print(n);
    }
    return 0;
}