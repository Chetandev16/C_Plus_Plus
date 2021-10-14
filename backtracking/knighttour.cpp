#include<bits/stdc++.h>
using namespace std;
#define n 8

void answer()
{
    int arr[n][n];
    memset(arr,-1, sizeof(arr));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cout<<arr[i][j]<<" ";
    }
}

int main()
{
    answer();
    return 0;
}