#include<bits/stdc++.h>
using namespace std;

class User{
    private:
    int id;
    string name;

    public:
    User(int id,string name){
        this->id = id;
        this->name = name;
    }
    virtual void search() = 0;
};