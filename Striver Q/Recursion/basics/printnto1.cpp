#include <bits/stdc++.h>
using namespace std;

void solv(int &n)
{
    if (n < 1)
        return;

    cout << n << " ";
    n--;
    solv(n); // agar call by ref nahi kara to n-1 call  
}

int main()
{
    int n;
    cin >> n;
    solv(n);
    return 0;
}