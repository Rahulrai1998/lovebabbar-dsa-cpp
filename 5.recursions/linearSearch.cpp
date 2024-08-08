#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int *arr, int size, int key)
{
    if (size == 0)
        return false;
    if (arr[0] == key)
        return true;
    else
        return linearSearch(arr + 1, size - 1, key);
}

bool binarySearch(int *arr, int s, int e, int key)
{
    if (s > e)
        return false;

    // int mid = (s + e) / 2; THIS FAILS FOR LARGER s AND e.
    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
        return true;
    else if (key < arr[mid])
        return binarySearch(arr, s, mid - 1, key);
    else
        return binarySearch(arr, mid + 1, e, key);
}

int main()
{

    int arr[] = {3, 5, 7, 8, 9};
    int size = 5;

    // cout << linearSearch(arr, size, 2);
    cout << binarySearch(arr, 0, 4, 10);

    return 0;
}