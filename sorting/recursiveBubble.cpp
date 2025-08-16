#include <bits/stdc++.h>
using namespace std;

void bubble(int arr[], int n)
{

    bool didSwap = false;
    if (n == 1)
        return;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            didSwap = true;
        }
    }

    if (!didSwap)
    {
        return;
    }

    bubble(arr, n - 1);
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

    bubble(arr, n);

    printArr(arr, n);

    return 0;
}