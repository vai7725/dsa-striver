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

int countMajority(vector<int> nums)
{
    int el;
    int count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (count == 0)
        {
            el = nums[i];
        }
        if (el == nums[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count < 0)
        {
            count = 0;
        }
    }
    return el;
}

int main()
{
    vector<int> vec = {7, 7, 5, 7, 5, 1, 7, 5, 5, 7, 7, 5, 5, 5, 5};
    printVector(vec);

    cout << countMajority(vec);

    return 0;
}