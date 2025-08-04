#include <iostream>
using namespace std;

int rev(int num)
{
    int revDgt = 0;
    bool isNeg = num < 0;
    num = abs(num);

    while (num > 0)
    {
        int lasDgt = num % 10;
        revDgt = revDgt * 10 + lasDgt;
        num /= 10;
    }

    return isNeg ? -revDgt : revDgt;
}

bool checkPalindrome(int x)
{
    int orgX = x;
    int rev = 0;

    while (x != 0)
    {
        int ls = x % 10;
        rev = rev * 10 + ls;
        x /= 10;
    }

    return orgX == rev ? true : false;
}

int main()
{

    // cout << rev(-2323) << endl;

    cout << checkPalindrome(121) << endl;

    return 0;
}