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

void rev(vector<int> &v, int start, int end)
{
    while (start < end)
    {
        swap(v[start], v[end]);
        start++;
        end--;
    }
}

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n;

    rev(nums, 0, n - k - 1);
    rev(nums, n - k, n - 1);
    rev(nums, 0, n - 1);

    printVector(nums);
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
    printVector(vec);

    rotate(vec, 3);
    return 0;
}