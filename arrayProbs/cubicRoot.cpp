#include <bits/stdc++.h>
using namespace std;

void isPowThree(int num)
{
    float cbd = cbrt(num);
    cout << typeid(num).name() << endl;
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
    // vector<int> vec = {34, 56, 78, 65, 23};
    // printVector(vec);
    isPowThree(27);
    return 0;
}