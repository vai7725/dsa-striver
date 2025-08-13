#include <bits/stdc++.h>
using namespace std;

void selection(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
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

    selection(arr, n);

    printArr(arr, n);
    return 0;
}