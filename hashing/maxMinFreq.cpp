#include <bits/stdc++.h>
using namespace std;

void freqs(int arr[], int n)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    int maxFreq = 0;
    int minFreq = n;

    int maxElem, minElem = 0;

    for (auto it : mp)
    {
        int count = it.second;
        int elem = it.first;

        if (count > maxFreq)
        {
            maxElem = elem;
            maxFreq = count;
        }

        if (count < minFreq)
        {
            minElem = elem;
            minFreq = count;
        }
    }

    cout << "Max - " << maxElem << ":" << maxFreq << endl;
    cout << "Min - " << minElem << ":" << minFreq << endl;
}

int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    freqs(arr, n);

    return 0;
}