#include<iostream>
using namespace std;

int linearsearch(int arr[], int n, int key){

    for(int j=0;j<n;j++)
    {
        if(key==arr[j])
        {
            return j;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int key,index;
    cin>>key;
 
    index = linearsearch(arr,n,key);

    cout<<"Index found at-"<<index;

    return 0;
}