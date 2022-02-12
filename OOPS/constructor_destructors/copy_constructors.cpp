#include<bits/stdc++.h> 

using namespace std;


class Test {
    private:
    int *ptr;
    public:

    Test (int x){
        ptr = new int (x);
    }

    Test(const Test &t){                 // copy constructors
        int value = *(t.ptr);
        ptr = new int(value);
    }

    void set(int y){
        *ptr = y;
    }
    void print(){
        cout<<*ptr<<endl;
    }
};


int main(){
    Test t1(10);
    Test t2(t1); // Test t2 =t1;
    t2.set(20);
    t1.print();
    t2.print();
    return 0;
}