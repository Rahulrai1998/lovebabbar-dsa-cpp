#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int size)
{
    // BASE CASE
    if (size == 0 or size == 1)
        return true;
        
    if (arr[0] > arr[1])
        return false;
    else
        return isSorted(arr + 1, size - 1);
}
int main()
{

    int arr[] = {2, 10, 6, 8, 9};
    cout << isSorted(arr, 5) << " ";
    return 0;
}