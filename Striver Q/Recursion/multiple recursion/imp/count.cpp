#include <bits/stdc++.h>
using namespace std;

int arr[4] = {3, 1, 2, 2};

int fun(int i, int k, int sum)
{
    if (i == 4)
    {
        if (sum == k)
            return 1;
        return 0;
    }
    sum = sum + arr[i];
    int l, r;
    l = fun(i + 1, k, sum);

    sum = sum - arr[i];
    r = fun(i + 1, k, sum);

    return l + r;
}

int main()
{
    int k;
    cin >> k;
    int sum = 0;
    cout << fun(0, k, sum);
    return 0;
}