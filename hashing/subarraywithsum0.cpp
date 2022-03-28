#include <bits/stdc++.h>

using namespace std;

bool subarray(int arr[], int size)
{
    unordered_set<int> s;
    int presum = 0;
    for (int i = 0; i < size; i++)
    {
        presum = presum + arr[i];
        if (s.find(presum) != s.end())
        {
            return true;
        }
        if (presum == 0)
        {
            return true;
        }

        s.insert(presum);
    }
    return false;
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    bool ans;

    ans = subarray(arr, size);

    ans ? cout << "true" : cout << "fasle";
    return 0;
}