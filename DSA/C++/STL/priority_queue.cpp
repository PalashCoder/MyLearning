#include <bits/stdc++.h>
using namespace std;

int main()
{

    //push,pop=>O(logn), top=>O(1)
    // not linear but a tree inside is maintained,, the largest value is on the top and sorted tree is that
    // max heap
    priority_queue<int> pq;

    // if we wanted the smallest value on top (reverse sorted) using pririty queue
    // mean heap
    priority_queue<int, vector<int>, greater<int>> rev_pq;

    return 0;
}