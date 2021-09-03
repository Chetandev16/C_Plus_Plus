#include<iostream>
using namespace std;

int occurfirst(int arr[],int n,int i,int num)
{
    if(i==n)
    return -1;

    if(arr[i]==num)
    return i;

    occurfirst(arr,n,i+1,num);
}

int occurlast(int arr[],int n,int i,int num)
{
    if(i==n)
    return -1; 
    
    if(arr[i]==num)
    return i;

    occurlast(arr,n,i-1,num);
}

int main()
{
    int n,num;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    cin>>num;
    int a,b;
    a = occurfirst(arr,n,0,num);
    b = occurlast(arr,n,n-1,num);
    cout<<a<<" "<<b;
    return 0;
}