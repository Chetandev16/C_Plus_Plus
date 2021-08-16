#include<iostream>
using namespace std;
int fact(int a){
    int fact1=1;
    for(int i=a;i>=1;i--)
    {
        fact1*=i;
    }
    return fact1;
}

int main(){
    int a;
    cin>>a;
    cout<<fact(a);
    return 0;
}