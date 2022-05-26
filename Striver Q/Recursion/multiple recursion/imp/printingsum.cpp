#include <bits/stdc++.h>
using namespace std;

int arr[4] = {3, 2, 1, 5};

void fun(int i, vector<int> &ans, int k)
{
    if (i >= 4)
    {
        int sum = 0;
        for (auto i : ans)
        {
            sum += i;
        }
        if (sum == k)
        {
            for (auto i : ans)
            {
                cout << i << " ";
            }
            cout << endl;
        }

        return;
    }

    ans.push_back(arr[i]);
    fun(i + 1, ans, k);
    ans.pop_back();
    fun(i + 1, ans, k);
}
void sol(int i, vector<int> &ans, int sum, int k)
{
    if (i == 4)
    {
        if (sum == k)
        {
            for (auto i : ans)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        return;
    }
    sum += arr[i];
    ans.push_back(arr[i]);
    sol(i + 1, ans, sum, k);
    ans.pop_back();
    sum = sum - arr[i];
    sol(i + 1, ans, sum, k);
}
int main()
{
    int sum = 0, k;
    cin >> k;
    vector<int> ans;
    sol(0, ans, sum, k);
    return 0;
}