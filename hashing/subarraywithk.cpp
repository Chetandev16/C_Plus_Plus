#include <bits/stdc++.h>

using namespace std;

bool subarray(int arr[], int size, int k)
{
    unordered_set<int> s;
    int presum = 0;
    for (int i = 0; i < size; i++)
    {
        presum = presum + arr[i];
        if (presum == k)
        {
            return true;
        }
        if (s.find(presum - k) != s.end())
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
    int k;
    cin >> k;
    ans = subarray(arr, size, k);

    ans ? cout << "true" : cout << "fasle";
    return 0;
}