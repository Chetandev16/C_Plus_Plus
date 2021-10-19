#include<bits/stdc++.h>

using namespace std;

void Mergea(int arr[], int l, int mid, int r)
{
   int p1= mid-l+1, p2= r-mid;
   int a[p1];
   int b[p2];

   for(int i=0;i<p1;i++)
   {
       a[i] = arr[l+i];
   }

   for(int i=0;i<p2;i++)
   {
       b[i] = arr[mid+1+i];
   }
   int x=0,y=0,k=l;

   while(x<p1 && y<p2){
       if(a[x]<b[y]){
        arr[k] = a[x];
        k++; x++;
       }
       else{
           arr[k]=b[y];
           k++;y++;
       }
    }
   while(x<p1)
   {
    arr[k] = a[x];
    k++; x++;
   }
   
   while(y<p2){
    arr[k]=b[y];
    k++;y++;
   }
   }

void MergeSort(int arr[],int l,int r)
{   int mid;
    if(l<r)
    {
       mid = (l+r)/2;
       MergeSort(arr,l,mid);
       MergeSort(arr,mid+1,r);


       Mergea(arr,l,mid,r);
    }
}

int main()
{
    int m;
    cin>>m;
    int arr[m];
    
    for(int i=0;i<m;i++)
    cin>>arr[i];
    
    //int arr[] = {5,4,3,2,1};
    MergeSort(arr,0,m);

    for(int i=0;i<m;i++)
    cout<<arr[i]<<" ";
    return 0;
}