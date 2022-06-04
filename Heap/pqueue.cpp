#include<queue>
#include<iostream>
using namespace std; 

int main()
{

    priority_queue<int> pq; //max heap
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    while(pq.empty() == false){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    //min heap
    priority_queue<int,vector<int>,greater<int>> pqmin;
    pqmin.push(4);
    pqmin.push(2);
    pqmin.push(5);
    pqmin.push(3);
    cout<<endl;
    while(pqmin.empty() == false){
        cout<<pqmin.top()<<" ";
        pqmin.pop();
    }

    return 0;
}