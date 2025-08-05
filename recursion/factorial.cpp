#include <iostream>
using namespace std;

int fctrl(int n)
{
    if (n == 0)
        return 1;
    return n * (fctrl(n - 1));
}

int main()
{
    cout << fctrl(3) << endl;
    return 0;
}