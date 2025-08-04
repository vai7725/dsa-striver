#include <iostream>
#include <cmath>
using namespace std;

void optimal(int num)
{
    for (int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            cout << i << endl;
            if (num / i != i)
            {
                cout << num / i << endl;
            }
        }
    }
}

int main()
{
    optimal(36);

    return 0;
}