#include<iostream>
using namespace std;

void insertionsort(int a[],int n){
    int x,k;
    for(int i=1;i<n;i++)
    {
        x = a[i];
        k=i;
        while(k>0 && a[k-1]>x)
        {
            a[k]=a[k-1];
            k--;
        }
        a[k] = x;
    }
}

int main(){
   int n;
   cin>>n;
   int arr[n];

   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   insertionsort(arr,n);

   for(int j=0;j<n;j++){
       cout<<arr[j]<<' ';
   }
   return 0;
} 