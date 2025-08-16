#include <bits/stdc++.h>
using namespace std;

void insertion(int arr[], int i, int n)
{
    if (i == n)
        return;

    while (i > 0 && arr[i - 1] > arr[i])
    {
        swap(arr[i], arr[i - 1]);
        i--;
    }

    insertion(arr, i + 1, n);
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {43, 23, 56, 45, 12};

    int n = sizeof(arr) / sizeof(arr[0]);

    printArr(arr, n);

    cout << endl;

    insertion(arr, 0, n);

    printArr(arr, n);

    return 0;
}