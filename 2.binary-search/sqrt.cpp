#include <bits/stdc++.h>
using namespace std;

long long int getFloorRoot(int num)
{

    int s = 0, e = num;
    long long int ans = -1, mid = 0;

    while (s <= e)
    {
        mid = s + (e - s) / 2;
        long long int square = mid * mid;

        if (square == num)
            return mid;
        else if (square < num)
        {
            ans = mid;
            s = mid + 1;
        }
        else
            e = mid - 1;
    }

    return ans;
}

double precision(int num, int precision, int floor)
{
    double factor = 1, ans = floor;

    for (int i = 1; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < num; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{

    cout << precision(7, 3, getFloorRoot(7)) << endl;

    return 0;
}