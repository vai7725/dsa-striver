#include <iostream>
using namespace std;

void nNums(int i, int n)
{
    if (i > n)
        return;
    cout << i << endl;
    nNums(i + 1, n);
}

void Nto1(int i)
{
    if (i < 1)
        return;
    cout << i << endl;
    Nto1(i - 1);
}

int main()
{
    // nNums(1, 10);
    Nto1(10);

    return 0;
}