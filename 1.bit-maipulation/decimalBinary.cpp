#include <bits/stdc++.h>
using namespace std;

int decimalToBinary(int n)
{

    int ans = 0, i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = ans + bit*pow(10,i);
        n = n>>1;
        i++;
    }

    return ans;
}

int negDecBinary(){
    //WRITE CODE FOR NEGATIVE DECIMAL NUMBER
}

int main()
{

    cout << decimalToBinary(2);
    return 0;
}