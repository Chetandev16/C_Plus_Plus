#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(5);
    v.push_back(20);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> v1{10,5,20};
    for(int x:v1){
        cout<<x<<" ";
    }
    cout<<endl;
    

    int n=3,x=10;
    vector<int> v2(n,x);
    for(auto it=v2.begin();it!=v2.end();it++){
        cout<<(*it)<<" ";
    }
    return 0;
}