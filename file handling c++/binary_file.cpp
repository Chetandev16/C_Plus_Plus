#include<bits/stdc++.h>
using namespace std; 

int main()
{
    char input[100];

    strcpy(input,"chetan pathak btech");

    fstream obj;

    obj.open("chetan.bin", ios::binary | ios::in | ios::out | ios::trunc);

    if(obj.is_open()){
        for(int i=0;i<=strlen(input);i++){
            obj.put(input[i]);
        }
        obj.seekg(0);

        char ch;
        while(obj.good()){
            obj.get(ch);
            cout<<ch;
        }
    }else{
        cout<<"error!!";
    }

    return 0;
}