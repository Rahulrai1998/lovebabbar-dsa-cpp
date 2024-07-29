#include <bits/stdc++.h>
using namespace std;

void countBackward(int n)
{

    if (n == 0)
        return;
    cout << n << endl;
    countBackward(n - 1);
}
void countForward(int n)
{

    if (n == 0)
        return;
    countForward(n - 1);
    cout << n << endl;
}

int main()
{

    // countBackward(5);
    cout << endl;
    countForward(5);

    return 0;
}