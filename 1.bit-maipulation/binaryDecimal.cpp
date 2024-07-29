#include <bits/stdc++.h>
using namespace std;

int binaryDecimal(int n)
{

    int sum = 0, i = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            sum = sum + pow(2, i);
        }
        i++;
        n = n / 10;
    }
    return sum;
}

int main()
{
    cout << binaryDecimal(101);
}