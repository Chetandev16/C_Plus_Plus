#include<iostream>

using namespace std;

int fact(int n){
    int fact=1;
    for(int i=n;i>=1;i--){
        fact*=i;
    } 
    return fact;
}

int main() {
    int a,x,y,z;
    cin>>a;

    for(int i=0;i<=a;i++)
    {
       for(int j=0;j<=i;j++)
       {
          x = fact(i)/(fact(i-j)*fact(j));
          cout<<x;
       }
       cout<<endl;
    }
}