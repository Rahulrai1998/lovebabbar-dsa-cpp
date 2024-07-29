#include <bits/stdc++.h>
using namespace std;

bool palindrome(char a[], int n)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
    
        if (a[s] != a[e])
        {
            cout << a[s] << " " << a[e];
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}
int main()
{

    char name[3];
    cin >> name;
    cout << palindrome(name, 3);

    return 0;
}