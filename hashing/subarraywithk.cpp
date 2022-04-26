#include <bits/stdc++.h>

using namespace std;

vector<int> subarray(int arr[], int size, int k)
{
    vector<int> ans;
    unordered_map<int,int> s;
    int presum = 0;
    for (int i = 0; i < size; i++)
    {
        presum = presum + arr[i];
        if (presum == k)
        {
            ans.push_back(1);
            ans.push_back(i+1);
            return ans;
        }
        if (s.find(presum - k) != s.end())
        {
            ans.push_back(s[presum-k]+1);
            ans.push_back(i+1);
            return ans;
        }
        s[presum] = i;
    }
    ans.push_back(-1);
    return ans;
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

    vector<int> ans;
    int k;
    cin >> k;
    ans = subarray(arr, size, k);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}