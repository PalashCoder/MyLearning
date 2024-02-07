#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<"  ";
        }
        char ch='A';
        for (int j = 0; j < 2*i+1; j++)
        {
            cout<<ch<<" ";
            if(i>j){
                ch++;
            }else{
                ch--;
            }
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