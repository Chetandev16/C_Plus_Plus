#include <bits/stdc++.h>
using namespace std;
void rev(int *arr, int l, int r)
{
    if (l > r)
        return;

    swap(arr[l], arr[r]);
    rev(arr, l + 1, r - 1);
}
// single pointer
int i = 0;
void rev(int arr[], int n)
{
    if (i >= n - i - 1)  //i>=n/2
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    i++;
    rev(arr, n);
}

int main()
{
    int arr[4] = {1, 2, 3, 4};

    // rev(arr, 0, 3);
    rev(arr, 4);

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}