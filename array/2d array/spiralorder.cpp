#include<iostream>
using namespace std;

/*void print_array(int a[][],int m, int n)
{

}*/

int main(){
    int m,n;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>>a[i][j];
    }
    
    int row_s=0,row_e=n-1,col_s=0,col_e=m-1;

    while(row_s<=row_e && col_s<=col_e)
    {
      //for row start
      for(int col=col_s;col<=col_e;col++)
      cout<<a[row_s][col]<<" ";
      row_s++;
      //for col end
      for(int row=row_s;row<=row_e;row++)
      cout<<a[row][col_e]<<" ";
      col_e--;

      //for row _end

      for(int col=col_e;col>=col_s;col--)
      cout<<a[row_e][col]<<" ";
      row_e--;
      //for col start

      for(int row=row_e; row>=row_s; row--)
      cout<<a[row][col_s]<<" ";
      col_s++;
    }
         
    return 0;
}