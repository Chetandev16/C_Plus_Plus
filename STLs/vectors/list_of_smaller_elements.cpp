#include<bits/stdc++.h> 

using namespace std;

vector<int> list_small(int arr[],int n, int k){
    vector<int> a;
    for(int i=0;i<n;i++){
        if(arr[i]<k){
            a.push_back(arr[i]);
        }
    }
    return a;
}



int main(){
    int arr[] = {8,100,20,40,3,7};
    vector<int> ans = list_small(arr,6,10);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}