#include<iostream>
using namespace std;

int main() {
    int n,temp=0,m;
    cin>>n;
    while(n!=0)
    {
        m = n%10;
        temp = (temp*10)+m;
        n/=10;
    }
    n=temp;
    cout<<n;
    return 0;
}