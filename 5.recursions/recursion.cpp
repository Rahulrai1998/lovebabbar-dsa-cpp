#include <bits/stdc++.h>
using namespace std;

void reachHome(int src, int dst)
{
    cout << src;

    if (src == 10)
    {
        return;
    }
    src++;
    reachHome(src, dst);

    return;
}

int main()
{
    int src = 1, dst = 10;
    reachHome(src, dst);

    return 0;
}