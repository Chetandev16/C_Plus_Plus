#include<bits/stdc++.h>
using namespace std; 


class BaseClass{
    public:
    int val;

    BaseClass(){
        val = 10;
    }

    virtual void display() = 0; // dp nothing function--> pure virtual function
}; //abstract base class kam se kam 1 virtual funtion

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
    return 0;
}