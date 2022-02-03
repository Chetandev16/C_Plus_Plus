#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[] = {3, 1, 2};
    char b[] = {'G', 'E', 'K'};
    pair<int, char> ans[3];
    for (int i = 0; i < 3; i++)
    {
        ans[i] = {a[i], b[i]};
        // ans[i].first = a[i];
        // ans[i].second = b[i];
    }
    //time complex = O(nlogn);
    sort(ans, ans + 3);
    for (int j = 0; j < 3; j++)
    {
        cout << ans[j].second << " ";
    }
    return 0;
}