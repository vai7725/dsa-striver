#include <bits/stdc++.h>
using namespace std;

int scndLrgst(int arr[], int n)
{
    if (n < 2)
        return -1;

    int lrgst = INT_MIN;
    int sLrgst = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > lrgst)
            lrgst = arr[i];

        if (arr[i] > sLrgst && arr[i] < lrgst)
            sLrgst = arr[i];
    }

    return sLrgst;
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

    cout << scndLrgst(arr, n) << endl;

    return 0;
}