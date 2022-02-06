#include<bits/stdc++.h> 

using namespace std;


int mycmp(pair<int,int>p1, pair<int,int> p2){
    return p1.second>p2.second;
}



int main(){
    int roll[]={101,108,103,105};
    int marks[] = {70,80,40,90};

    vector<pair<int,int>> check;
    for(int i=0;i<4;i++){
        // check[i] = {marks[i],roll[i]};
        // check.push_back(make_pair(roll[i],marks[i]));
        check.push_back(make_pair(marks[i],roll[i]));
    }
    sort(check.begin(),check.end(),mycmp);


    sort(check.begin(),check.end(),greater<pair<int,int>>());
    for(int j=0;j<4;j++){
        cout<<check[j].second<<" ";
    }

    return 0;
}