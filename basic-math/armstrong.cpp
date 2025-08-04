#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool bruteForce(int num)
{
    int orgNum = num;
    int arm = 0;
    int numLen = to_string(orgNum).length();

    while (num != 0)
    {
        int lastDgt = num % 10;
        arm += pow(lastDgt, numLen);
        num /= 10;
    }
    cout << arm << endl;
    return arm == orgNum ? true : false;
}

int main()
{
    cout << bruteForce(1634) << endl;

    return 0;
}