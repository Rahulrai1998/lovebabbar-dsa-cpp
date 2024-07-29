// PRINT THE CORRESPONDING NAME OF DIGITS IN A NUMBER
// 412 = FOUR ONE TWO

#include <bits/stdc++.h>
using namespace std;

void sayDigits(int n, string arr[])
{
    // base case
    if (n == 0)
        return;
    int digit = n % 10;
    n = n / 10;

    sayDigits(n, arr);
    cout << arr[digit] << " ";
}

int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    sayDigits(102, arr);
    return 0;
}