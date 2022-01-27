#include <bits/stdc++.h>
using namespace std;

int maxsubarray(int arr[], int n)
{
    int maxarr = arr[0];
    int currmax = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (currmax >= 0)
        {
            currmax += arr[i];
        }

        else
        {
            currmax = arr[i];
        }

        maxarr = max(currmax, maxarr);
    }

    return maxarr;
}

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int ans = maxsubarray(arr, 9);
    cout << ans;
    return 0;
}