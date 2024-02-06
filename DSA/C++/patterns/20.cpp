#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    for (int i = 1; i <= 2*n-1; i++)
    {
        int stars=i,spaces=(2*(n-i));
        if(i>n){
            stars=2*n-i;
            spaces=2*(i-n);
        }
        for (int  j = 1; j <= stars; j++)
        {
            cout<<"* ";
        }
        for (int j = 1; j <= spaces; j++)
        {
            cout<<" ";
        }
        for (int  j = stars; j>= 1; j--)
        {
            cout<<"* ";
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