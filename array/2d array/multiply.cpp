#include<iostream>

using namespace std;

int main()
{ 
    int n,m,a,b;
    cin>>n>>m;
    cin>>a>>b;
    int ar1[n][m],ar2[a][b],fi[n][b];
    for(int i=0;i<n;i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>ar1[i][j];
        }
        
    }
    for(int k=0;k<a;k++)
    {
        for (int u= 0;u<b;u++)
        {
            cin>>ar2[k][u];
        }
        
    }
    if(n==b)
    {
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<b;j++)
        {
            fi[i][j] = 0;
            for(int k=0;k<b;k++)
            {
                fi[i][k] = ar1[i][k] * ar2[k][j];
            }

        }
      }
    }
    return 0;
}