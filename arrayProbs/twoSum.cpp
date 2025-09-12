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

vector<int, int> twoSum(vector<int> &nums, int target)
{
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        int elem = nums[i];
        int needed = target - elem;

        if (mp.find(needed) != mp.end())
        {
            cout << mp[needed] << ", " << i << endl;
            return {mp[needed], i};
        }
        mp[elem] = i;
    }

    cout << "-1, -1" << endl;
    return {-1, -1};
}

int main()
{
    vector<int> vec = {34, 56, 78, 65, 23};
    printVector(vec);

    vector<int, int> idxVec = twoSum(vec, 12);

    return 0;
}