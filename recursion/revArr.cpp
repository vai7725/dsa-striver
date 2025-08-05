#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void revArr(int arr[], int st, int end)
{
    if (st < end)
    {
        swap(arr[st], arr[end]);
        revArr(arr, st + 1, end - 1);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    cout << size << endl;

    printArr(arr, size);

    revArr(arr, 0, size - 1);

    printArr(arr, size);

    return 0;
}