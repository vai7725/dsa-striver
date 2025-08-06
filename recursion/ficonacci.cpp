#include <bits/stdc++.h>
using namespace std;

int printFib(int n)
{
    if (n <= 1)
    {
        return n;
    }

    int last = printFib(n - 1);
    int slast = printFib(n - 2);

    return last + slast;
}

int main()
{
    cout << printFib(10) << " ";
    // printFib(10);
    cout << endl;

    return 0;
}