#include<bits/stdc++.h>
using namespace std;

void dnf(int arr[], int s){
    int low=0;
    int high = s-1;
    int mid = 0;

    while(mid<=high){
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[high],arr[mid]);
            high--;
        }
    }

}

int main(){
    int arr[] = {1,1,2,0,2,2,0};
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    dnf(arr,7);

    for(int j=0;j<7;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}
