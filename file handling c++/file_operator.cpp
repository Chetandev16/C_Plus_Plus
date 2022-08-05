#include<bits/stdc++.h>
using namespace std; 

int main()
{
    fstream obj;
    obj.open("chetan.txt",ios::out | ios::in);

    if(obj.is_open()){
        // cout<< obj.tellg()<<endl;
        // string line;
        // obj.seekg(10); // strat from 10th posiion from start
        // while(obj.good()){
        //     getline(obj,line);
        //     cout<<line<<endl;
        // }
        obj << "some random text!"<<endl;
        cout<<obj.tellp()<<endl;
        obj.seekp(5,ios::beg);
        obj << "some usefull text!"<<endl;
    }else{
        cout<<"error!";
    }  

    return 0;
}