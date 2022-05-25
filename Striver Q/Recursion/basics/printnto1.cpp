#include <bits/stdc++.h>
using namespace std;

void solv(int &n)
{
    if (n < 1)
        return;

    cout << n << " ";
    n--;
    solv(n);
}

int main()
{
    int n;
    cin >> n;
    solv(n);
    return 0;
}