#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int  j = 1; j <= i; j++)
        {
            if((i+j)%2==0){
                cout<<"1";
            }else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int t,n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        print(n);
    }
    return 0;
}