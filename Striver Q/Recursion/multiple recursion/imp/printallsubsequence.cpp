#include <bits/stdc++.h>
using namespace std;

int arr[3] = {3, 1, 2};

void fun(int i, vector<int> &ans)
{
    if (i >= 3)
    {
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    ans.push_back(arr[i]);
    fun(i + 1, ans);
    ans.pop_back();
    fun(i + 1, ans);
}

int main()
{
    vector<int> ans;
    fun(0, ans);
    return 0;
}