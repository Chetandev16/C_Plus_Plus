#include<bits/stdc++.h> 

using namespace std;

struct Mystack{
    vector <int> v;
    void push(int x){
        v.push_back(x);
    }

    int pop(){
        int res = v.back();
        v.pop_back();
        return res;
    }
    int size(){
        return v.size();
    }

    bool isEmpty(){
        return v.empty();
    }

    int peak(){
        return v.back();
    }

};


int main(){
    Mystack a;
    a.push(100);   
    a.push(101);  
    a.push(102);  
    a.push(103);  
    a.push(104);  
    a.push(105);
    cout<<a.pop()<<endl; 
    cout<<a.pop()<<endl;  
    cout<<a.pop()<<endl; 
    cout<<a.pop()<<endl; 
    cout<<a.size()<<endl;
    cout<<a.peak()<<endl;
    cout<<a.isEmpty()<<endl;

    return 0;
}