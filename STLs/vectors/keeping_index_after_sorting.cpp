#include<bits/stdc++.h> 

using namespace std;


vector<pair<int,int>> index_after_sort(int arr[],int n){
    vector<pair<int,int>> a;
    for(int i=0;i<n;i++){
        a.push_back(make_pair(arr[i],i));
    }
    sort(a.begin(),a.end());
    return a;
}


int main(){
    int arr[] = {10,21,12,3,1,100,90};
    vector<pair<int,int>> ans = index_after_sort(arr,7);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i].first<<" "<<ans[i].second;
        cout<<endl;
    }
    return 0;
}