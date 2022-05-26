#include <bits/stdc++.h>
using namespace std;

void sol(int i, vector<int> &ans, int *arr, bool &check, int sum, int k)
{
    if (i == 4)
    {
        // if(check){
        //     return;
        // }
        if (sum == k)
        {
            check = true;
            for (auto i : ans)
            {
                cout << i << " ";
            }
        }
        return;
    }
    sum = sum + arr[i];
    ans.push_back(arr[i]);
    sol(i + 1, ans, arr, check, sum, k);
    if (!check)
    {
        sum = sum - arr[i];
        ans.pop_back();
        sol(i + 1, ans, arr, check, sum, k);
    }
}

int main()
{
    int k;
    cin >> k;
    int arr[4] = {3, 1, 4, 2};
    vector<int> ans;
    bool check = false;
    sol(0, ans, arr, check, 0, k);
    return 0;
}