#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int i, int e)
{

    if (i >= e)
        return true;

    if ((i <= e) and s[i] != s[e])
        return false;
    else
        return isPalindrome(s, i+1, e-1);
}

int main()
{
    string name = "abccba";
    bool res = isPalindrome(name, 0, name.length() - 1);
    cout << res << endl;
    return 0;
}