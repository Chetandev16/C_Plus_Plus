#include<iostream>
using namespace std;

void fibona(int n, int a,int b){
    int sum=0;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<n-2;i++){
        sum = a+b;
        a=b;
        b=sum;
        cout<<sum<<" ";
    }
}

int main(){
    int a=0,b=1,n;
    cin>>n;
    fibona(n,a,b); 
    return 0;
}