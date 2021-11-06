#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    if(n==1) return false;
    else if(n==2 || n==3) return true;
    else if(n%2==0 || n%3==0) return false;

    for(int i=5; i*i<=n; i+=6){
        if(n%i == 0 || n%(i+2)==0)
        return false;
    }

    return true;

}


int main(){
    int n;
    cin>>n;
    bool x;
    x = isPrime(n);
    if(x==true){
        cout<<"Given number is prime";
    }else{
        cout<<"Given number is not prime";
    }
    return 0;
}