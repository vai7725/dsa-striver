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

int maxSumOfSubArr(vector<int> nums)
{
    int max = INT_MIN;
    int sum = 0;

    int startIdx = -1, endIdx = -1;

    for (int i = 0; i < nums.size(); i++)
    {
        int start;
        if (sum == 0)
            start = i;
        if (sum < 0)
            sum = 0;

        sum += nums[i];

        if (sum > max)
        {
            max = sum;
            startIdx = start;
            endIdx = i;
        }
    }

    for (int i = startIdx; i <= endIdx; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return max;
}

int main()
{
    vector<int> vec = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    printVector(vec);

    cout << maxSumOfSubArr(vec);

    return 0;
}