#include<bits/stdc++.h> 

using namespace std;

template<typename T,int limit>
T arrMax(T arr[], int n){
    T res=arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>res){
            res = arr[i];
        }
    }
    return res;
    
}


int main(){
    int arr[] = {12, 32 ,100,54,101};
    float arr1[] = {12.6, 32.1 ,100.99,54.12,101.321};
    cout<<arrMax<int,100>(arr,5)<<endl;
    cout<<arrMax<float,50>(arr1,5)<<endl;
    return 0;
}