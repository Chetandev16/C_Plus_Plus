#include <bits/stdc++.h>
using namespace std;

void solv(int &x, int n)
{
    if (x > n)
        return;
    cout << x << endl;
    x++;
    solv(x, n);
}

int main()
{
    int x = 1;
    int n;
    cin >> n;
    solv(x, n);
    return 0;
}