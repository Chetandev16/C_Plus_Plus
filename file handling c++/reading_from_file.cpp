#include<bits/stdc++.h>
using namespace std; 

int main()
{
    ifstream obj;
    obj.open("chetan.txt");

    if(obj.is_open()){
        string line;
        while(obj.good()){
            getline(obj,line);
            cout<<line;
            cout<<" ";
        }
    }else{
        cout<<"error";
    }
    return 0;
}