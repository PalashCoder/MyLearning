#include <iostream>
using namespace std;

int main()
{
    int n = 15, wrapper = 0, total = 0;
    while (n > 0)
    {
        wrapper++;
        total++;
        n--;
    }
    while (wrapper > 0)
    {
        if (wrapper / 3 != 0)
        {
            total++;
            wrapper -= 3;
            wrapper += 1;
        }
        else
            break;
    }

    cout << total;

    return 0;
}