#include <bits/stdc++.h>
using namespace std;

void solve(int n, int &sum)
{
    if (n == 0)
        return;
    sum = sum + n;
    solve(n - 1, sum);
}

int solfun(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + solfun(n - 1);
}

int main()
{
    int n;
    cin >> n;
    // int sum = 0;
    // solve(n, sum);
    // cout << sum;
    int ans = solfun(n);
    cout << ans;
    return 0;
}