#include <iostream>
using namespace std;

void printName(int i, int n)
{
    while (i > n)
        return;
    cout << "Vaibhav Prajapat" << endl;
    printName(i + 1, n);
}

int main()
{
    printName(1, 5);
    return 0;
}