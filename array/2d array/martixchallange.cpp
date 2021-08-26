#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for (int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
        
    }

    int search;
    cin>>search;
    int i=n,j=m,counter=0;
    while (j!=0)
    {
        if(a[i][j]==search)
        {
            counter++;
            cout<<"found! at:- "<<i<<" "<<j;
            break;
        }
        else if(a[i][j]>search)
        {
           j--;
        }
        else
        {
            i++;
        }
    }
    if(counter == 0)
    {
        cout<<"not found";
    }  
    return 0;
}