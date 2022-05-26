#include <bits/stdc++.h>
using namespace std;

int f(int n)
{
    if (n <= 1)
        return n;

    int last = f(n - 1);
    int last1 = f(n - 2);
    return last + last1;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << f(i) << " ";
    }
    return 0;
}