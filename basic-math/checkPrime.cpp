#include <iostream>
#include <cmath>
using namespace std;

bool checkPrime(int num)
{
    int count = 0;

    for (int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            count++;
            if (num / i != i)
            {
                count++;
            }
        }
    }

    return count == 2 ? true : false;
}

int main()
{
    cout << checkPrime(12) << endl;
    return 0;
}