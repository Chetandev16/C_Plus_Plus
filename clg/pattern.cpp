#include<iostream>
 
using namespace std;

int main() {
    int n=5,temp=1;
    for(int i=5;i>0;i--)
    { 
       for(int j=0;j<i;j++){
           cout<<" ";
       }
       for(int x=0;x<temp;x++){
        cout<<"*";
        }
        temp++;
    cout<<endl;
    }
    return 0;
}