#include<bits/stdc++.h> 

using namespace std;

void leftrotate(int arr[] , int n,int index){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;

    int j=0;
}


int main(){
    int arr[] = {2,32,122,90};
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        leftrotate(arr,4,2);
    }

    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}