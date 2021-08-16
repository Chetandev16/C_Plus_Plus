#include<iostream>

using namespace std;

int max_array(int a[],int n, int key)
{
    int max=a[0];
    for(int i=0;i<key;i++)
    {
        if(a[i]>max)
        max = a[i];
        cout<<max<<endl;
    }
    return max;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans;
    int index;
    cin>>index;
    ans = max_array(arr,n,index);

    cout<<"max till "<<index<<" is: "<<ans;
    return 0;
}