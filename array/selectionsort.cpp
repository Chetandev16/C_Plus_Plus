#include<iostream>

using namespace std;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *b = temp;
}

void selectionsort(int arr[], int n){
    int min;
    for(int i=0;i<n-1;i++)
    {
        min = i;
        for(int j=i+1;j<n;j++)
            {
               if(arr[j]<arr[min])
                min = j;
            }
        swap(arr[i],arr[min]);
      
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int j=0;j<n;j++)
    cin>>arr[j];

    selectionsort(arr,n);

    cout<<"Sorted array is:-"<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}