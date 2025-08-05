#include <iostream>
using namespace std;

void parameterized(int i, int n)
{
    if (i < 0)
    {
        cout << n << endl;
        return;
    }
    parameterized(i - 1, n + i);
}

int functional(int n)
{
    if (n == 0)
        return 0;

    return n + functional(n - 1);
}

int main()
{

    // parameterized(5, 0);
    cout << functional(5) << endl;
    return 0;
}