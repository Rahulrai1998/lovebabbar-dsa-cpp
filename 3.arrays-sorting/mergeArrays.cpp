#include <bits/stdc++.h>
using namespace std;

void mergearrays(int a1[], int n, int a2[], int m, int a3[])
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (a1[i] < a2[j])
        {
            a3[k++] = a1[i++];
        }
        else
        {
            a3[k++] = a2[j++];
        }
        }
    while (i < n)
    {
        a3[k++] = a1[i++];
    }
    while (j < m)
    {
        a3[k++] = a2[j++];
    }
}

int main()
{

    int a1[5] = {1, 3, 5, 7, 9};
    int a2[3] = {2, 4, 6};
    int a3[8] = {0};

    mergearrays(a1, 5, a2, 3, a3);

    for (int i = 0; i < 8; i++)
    {
        cout << a3[i] << " ";
    }

    return 0;
}