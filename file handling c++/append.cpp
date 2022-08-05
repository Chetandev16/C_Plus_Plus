#include<bits/stdc++.h>
using namespace std; 

int main()
{
    fstream obj;

    obj.open("chetan.txt",ios::in | ios:: out | ios:: app);

    if(obj.is_open()){
        obj << "append to chetan.txt"<<endl;

        obj.seekg(0);
        string line;
        while(obj.good()){
            getline(obj,line);
            cout<<line<<endl;
        }
        
    }else{
        cout<<"error!";
    }
    return 0;
}