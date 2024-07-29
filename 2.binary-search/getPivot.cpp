#include <bits/stdc++.h>
using namespace std;

int pivot(int arr[], int n)
{
    int s = 0, e = n-1, mid;

    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] >= arr[0])
            s = mid + 1;
        else
            e = mid;
    }
    return s;
}

int main()
{

    int arr[] = {7, 8, 9, 1, 2, 3};

    cout << pivot(arr, 6);

            return 0;
}