#include <bits/stdc++.h>
using namespace std;

int detectSpy(vector<int> nums)
{
    int n = nums.size();
    int dominating;

    if (nums[0] == nums[1] || nums[1] == nums[2])
    {
        dominating = nums[0];
    }
    else
    {
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != dominating)
        {
            return i;
        }
    }

    return -1;
}

int detectSpyOptimal(vector<int> nums)
{
    int n = nums.size();
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        if (nums[left] == nums[right])
        {
            left++;
            right--;
        }
        else
        {
            if (left + 1 < n && nums[left + 1] == nums[left])
            {
                return right;
            }
            else
            {
                return left;
            }
        }
    }

    return left;
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
    vector<int> vec = {5, 5, 5, 4, 5, 5, 5};
    printVector(vec);

    cout << detectSpy(vec) << endl;
    cout << detectSpyOptimal(vec) << endl;

    return 0;
}