#include<bits/stdc++.h> 

using namespace std;

void rotate(int arr[], int n,int index){
    int temp,c=n;
    for(int i=0;i<index;i++){
        temp = arr[0];
        for(int j=1;j<n;j++){
            arr[j-1] = arr[j];
        }
        arr[c-1] = temp;
    }

    int j=0;
    while(n!=0){
        cout<<arr[j]<<" ";
        j++;
        n--;
    } 
}


int main(){
    int arr[] = {2,32,122,90,66,232,121,900};
    rotate(arr,8,6);
    return 0;
}