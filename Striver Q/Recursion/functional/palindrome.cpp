#include <bits/stdc++.h>
using namespace std;

int i = 0;
bool solv(string s, int l)
{
    if (i >= l-i-1)
    {
        return true;
    }

    if (s[i] == s[l - i - 1])
    {
        i++;
        return solv(s, l);
    }
    else
    {
        return false;
    }
}

int main()
{
    string s;
    cin >> s;
    int l = s.length();
    if (solv(s, l))
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
    return 0;
}