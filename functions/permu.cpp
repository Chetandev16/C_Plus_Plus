#include<iostream>

using namespace std;

int fact(int n){
    int sum=1;
    for(int i=n;i>=1;i--){
        sum*=i;
    }
    return sum;
}

int main() {
    int n,r,x1,x2,x3,ans;
    cin>>n>>r;
    x1=fact(n);
    x2=fact(r);
    x3=fact(n-r);

    ans = x1/(x2*x3);
    cout<<ans;
    return 0;
}