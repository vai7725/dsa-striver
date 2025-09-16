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

void sort01(vector<int> &nums)
{
    int n = nums.size();
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
            mid++;
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }

        printVector(nums);
    }
}

int main()
{
    vector<int> vec = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0};
    printVector(vec);

    sort01(vec);
    // printVector(vec);

    return 0;
}