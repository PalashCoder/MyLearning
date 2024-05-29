#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector is a dynamic array in cpp
    vector<int> v;
    v.push_back(1);         // insert "1"
    v.emplace_back(2);      // intert "2" but faster than pushback
    v.back();               // pointing at the last element of the vector
    vector<int> v1(5, 100); // already defined 5 instances of 100 in the vector= {100,100,100,100,100}
    vector<int> v2(5);      // defined 5 instances of ) or garbage value in it
    vector<int> v3(v1);     // copy bof v1

    cout << v1[1];

    // iterator
    vector<int>::iterator it1 = v.begin(); // it1 named iterator pointing at the begining of vector v in memory address
    vector<int>::iterator it2 = v.end();   // it2 named iterator pointing at one point afte the end of vector v in memory address
    auto it3 = v.begin();                  // this is also same as line 18, it is also assigning the vector iterator to it3
    // auto is an auto assignation like, auto a=5, means a is auto assigned as int
    for (auto it4 : v)
    { // for each loop
        cout << it4;
    }

    v.erase(v.begin());       // Erase the function
    v.insert(v.begin(), 100); // insert at the beginning
    v.size();                 // elemnts in the vector
    v.pop_back();             // pop from last
    v.clear();                // clears the whole vector, makes it empty vector
    cout << *(it1);

    return 0;
}