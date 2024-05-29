#include <bits/stdc++.h>
using namespace std;

int main()
{
    // LIFO all operations are O(1)
    stack<int> st;
    st.push(1);
    st.emplace(2);
    cout << st.top();
    st.pop();
    st.size();
    st.empty();

    return 0;
}