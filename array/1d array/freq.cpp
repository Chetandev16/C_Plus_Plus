#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr [] = {10,20,20,30,40,40,10,20};

    unordered_map<int,int> mp;
    for(int i=0;i<8;i++){
        mp[arr[i]]++;
    }

    for(auto it:mp){
        cout<<it.first<<" "<<it.second;
        cout<<endl;
    }
    return 0;
}