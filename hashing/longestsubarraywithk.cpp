#include<bits/stdc++.h>
using namespace std;


int longestSubarray(int arr[],int n, int sum){
    
    int ans=0;
    vector <int> v;
    // for(int i=0;i<n;i++){
    //     int currsum=0;
    //     for(int j=i;j<n;j++){
    //         currsum += arr[j];
    //         if(currsum == sum){
    //             ans = max(ans, j-i+1);
    //         }
    //     }
    // }

    unordered_map <int,int>  mp;

    int currsum =0;

    for(int i=0;i<n;i++){
        currsum += arr[i];
        if(currsum == sum){
            ans = i+1;
        }
        if(mp.find(currsum) == mp.end()){
            mp.insert({currsum,i});
        }
        if(mp.find(currsum-sum) != mp.end()){
            ans = max( ans, i-mp[currsum-sum]);
            v.push_back(mp[currsum-sum]+1);
            v.push_back(i);
            for(int i=0;i<2;i++){
                cout<<v[i]<<" ";
            }
        }

    }

    return ans;
}


int main(){
    int arr[] = {8,3,1,5,-6,6,2,2};

    int ans = longestSubarray(arr,7,4);
    cout<<ans;
    return 0;
}