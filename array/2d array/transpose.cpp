#include<iostream>
using namespace std;

int main(){
    int n,temp;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cin>>a[i][j];
    }
    int b[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           b[i][j] = a[j][i];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}