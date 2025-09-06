#include <bits/stdc++.h>
using namespace std;

void printVector(const vector<int> &v)
{
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;
}

int findMissing(vector<int> nums)
{
    int xor1 = 0, xor2 = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        xor2 ^= nums[i];
        xor1 ^= i;
    }
    xor1 ^= n;
    return xor1 ^ xor2;
}

int main()
{
    vector<int> vec = {0, 2, 3, 4};
    printVector(vec);

    cout << findMissing(vec);

    return 0;
}