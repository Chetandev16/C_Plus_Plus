#include<iostream>
using namespace std;

void sort(int arr[],int n)
{
    int temp;
    for(int j=0;j<n;j++)
    {
        for(int i=j+1;i<n;i++)
        {
            if(arr[j]>arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i] = temp;

            }
        }
    }
}

int binarysearch(int arr[],int n, int key)
{
    int start=0,mid,end=n;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==key)
        {
            return mid; 
        }
        else if(arr[mid]>key)
        {
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }
    return -1;
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
    sort(arr,n);

    int key, index;

    cin>>key;
    index = binarysearch(arr,n,key);

    cout<<"Index found at- "<<index;

    return 0;
}