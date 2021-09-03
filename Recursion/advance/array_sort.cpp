#include<iostream>
using namespace std;

bool sorted(int arr[], int n)
{
    if(n==1)
    return 1;
    
    bool restarr = sorted(arr+1,n-1);

    return(arr[0]<arr[1] && restarr);
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    bool ab;

    ab = sorted(a,n);

    if(ab==0)
    cout<<"array is not sorted";
    else
    cout<<"aray is sorted";
    
    return 0;
}