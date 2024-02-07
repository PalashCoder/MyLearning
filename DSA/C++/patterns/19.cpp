#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <=n-i ; j++)
        {
            cout<<"*";
        }
        for (int j = 0; j < count; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <=n-i ; j++)
        {
            cout<<"*";
        }
        count=count+2;
        cout<<endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i ; j++)
        {
            cout<<"*";
        }
        for (int j = 0; j < count-2; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <=i ; j++)
        {
            cout<<"*";
        }
        count=count-2;
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