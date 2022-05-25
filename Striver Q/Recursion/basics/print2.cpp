#include <bits/stdc++.h>
using namespace std;

//backtracking

void solv(int i)
{
    if (i < 1)
        return;
    solv(i-1);
    cout << i << endl;
}

int main()
{
    int n;
    cin >> n;
    solv(n);
    return 0;
}