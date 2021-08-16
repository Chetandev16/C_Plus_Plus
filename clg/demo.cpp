#include<iostream>
using namespace std;
int main()
{
int i,j,m;
cout<<"Enter number of rows : "<<endl;
cin>>m;
for(i=1; i<=m; i++)
{
for(j=1; j<=m; j++)
{
if((i==1)||(i==m))
cout<<"* ";
else
{
if((j==1)||(j==m))
cout<<"* ";
else
cout<<" "; 
}
}
cout<<endl;
}
return 0;
}