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

// My sol
void moveZeros(vector<int> &nums)
{
    int n = nums.size();
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (nums[j] == 0)
            j--;

        if (nums[i] == 0)
        {
            swap(nums[i], nums[j]);
        }

        i++;
    }
}

void moveZros(vector<int> &nums)
{
    int n = nums.size();
    int j = -1;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            j = i;
            break;
        }
    }

    if (j == -1)
        return;

    for (int i = j + 1; i < n; i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main()
{
    vector<int> vec = {1, 1, 2, 3, 2, 0, 0, 4, 5, 0};
    printVector(vec);

    moveZros(vec);

    printVector(vec);
    return 0;
}