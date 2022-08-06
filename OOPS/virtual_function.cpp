#include<bits/stdc++.h>
using namespace std; 


class BaseClass{
    public:
    int val;

    BaseClass(){
        val = 10;
    }

    virtual void display(){
        cout<<"base class"<<val<<endl;
    }
    virtual void x(){
        cout<<"hi";
    }
};

class DerivedClass : public BaseClass{
    public:
    int valD;

    DerivedClass(){
        valD = 10;
    }

    void display(){
        cout<<"derived class"<<valD<<endl;
    }
};


int main()
{
    BaseClass *ptr;
    DerivedClass obj;

    ptr = &obj;

    ptr->display();
    ptr->x();   
    return 0;
}