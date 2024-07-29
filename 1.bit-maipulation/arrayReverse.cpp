#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end)
{

    int temp;

    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {4, 2, 1, 8, 9};
    // for (auto it : arr)
    //     cout << it << " ";
    reverse(arr, 0, 4);
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}