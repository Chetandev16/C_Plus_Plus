#include <bits/stdc++.h>
using namespace std;

void solv(int &c, int n)
{
    if (c == n)
        return;
    cout << c + 1 << "->"<< "chetan" << endl;
    c++;
    solv(c, n);
}

int main()
{
    int n, c = 0;
    cin >> n;

    solv(c, n);
    return 0;
}