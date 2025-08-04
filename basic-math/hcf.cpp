#include <iostream>
using namespace std;

int bruteForce(int num1, int num2)
{
    int gcd = 1;

    for (int i = 1; i <= min(num1, num2); i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    cout << gcd << endl;
    return gcd;
}

int better(int num1, int num2)
{
    for (int i = min(num1, num2); i >= 1; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            cout << i << endl;
            return i;
        }
    }
    return -1;
}

int euclidean(int num1, int num2)
{
    while (num1 > 0 && num2 > 0)
    {
        if (num1 > num2)
        {
            num1 = num1 % num2;
        }
        else
        {
            num2 = num2 % num1;
        }
    }
    if (num1 == 0)
    {
        cout << num2 << endl;
        return num2;
    }
    cout << num1 << endl;
    return num1;
}

int main()
{
    bruteForce(20, 15);
    better(20, 15);
    euclidean(20, 15);

    return 0;
}