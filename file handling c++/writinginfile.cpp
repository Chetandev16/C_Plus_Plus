#include<bits/stdc++.h>
using namespace std; 

int main()
{
    ofstream obj;

    obj.open("chetan.txt"); // by default this will open in in out mode and to append in existing file we neeed  ios::app 


    if(obj.is_open()){
        obj << "hi this is chetan"<<endl;
        obj << "i am pursuing btech cse"<<endl;
        obj<<"supp!!"<<endl;
        obj.close();
        cout<<"Done!!!";
    }else{
        cout<<"error!";
    }
    return 0;
}