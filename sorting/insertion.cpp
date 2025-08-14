#include <bits/stdc++.h>
using namespace std;

void insertion(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
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

    insertion(arr, n);

    printArr(arr, n);

    return 0;
}