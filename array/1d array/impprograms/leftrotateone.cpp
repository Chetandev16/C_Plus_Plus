#include<bits/stdc++.h> 

using namespace std;

void leftrotate(int arr[], int n,int index){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;

    int j=0;
    while(n!=0){
        cout<<arr[j]<<" ";
        j++;
        n--;
    } 
}


int main(){
    int arr[] = {2,32,122,90};
    leftrotate(arr,4,2);
    return 0;
}