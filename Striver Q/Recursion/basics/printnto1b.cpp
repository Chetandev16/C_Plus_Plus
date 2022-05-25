#include <bits/stdc++.h>
using namespace std;

// backtracking

void solv(int i, int n)
{
    if (i > n)
        return;
    solv(i + 1, n);
    cout << i << " ";
}

int main()
{
    int n;
    cin >> n;
    solv(1, n);
    return 0;
}