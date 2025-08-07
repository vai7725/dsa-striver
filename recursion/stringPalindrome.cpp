#include <bits/stdc++.h>
using namespace std;

bool strPalindrome(string s, int i)
{
    if (i >= s.length() / 2)
        return true;

    if (s[i] != s[s.length() - i - 1])
        return false;

    return strPalindrome(s, i + 1);
}

int main()
{
    cout << strPalindrome("madm", 0) << endl;

    return 0;
}