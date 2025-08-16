#include <bits/stdc++.h>
using namespace std;

int findPivIdx(int arr[], int low, int high)
{
    int piv = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (arr[i] <= piv && i < high)
        {
            i++;
        }
        while (arr[j] >= piv && j > low)
        {
            j--;
        }

        if (i < j)
            swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);

    return j;
}

void qs(int arr[], int low, int high)
{
    if (low >= high)
    {
        return;
    }

    int pivIdx = findPivIdx(arr, low, high);
    qs(arr, low, pivIdx - 1);
    qs(arr, pivIdx + 1, high);
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

    qs(arr, 0, n - 1);

    printArr(arr, n);

    return 0;
}