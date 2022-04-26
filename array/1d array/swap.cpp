#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 5, 0, 8, 0, 0, 9, 0};

    int n = 8, i = 0, j = n - 1;
    while (i <= j)
    {
        if (arr[i] != 0)
        {
            i++;
        }
        if (arr[j] == 0)
        {
            j--;
        }
        if (arr[i] == 0 && arr[j] != 0)
        {
    
            if (arr[i] < arr[j])
            {
                swap(arr[i], arr[j]);
            }
            i++;
            j--;
        }
    }

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}