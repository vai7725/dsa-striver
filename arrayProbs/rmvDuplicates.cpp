#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr)
{
    int i = 0;

    for (int j = 0; j < arr.size(); j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }

    return i + 1;
}

void printVector(const vector<int> &v)
{
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    printVector(vec);

    cout << removeDuplicates(vec) << endl;

    printVector(vec);
    return 0;
}