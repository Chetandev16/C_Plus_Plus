#include<iostream>

using namespace std;

int main(){
    int n=4;


     for(int c=1;c<=4;c++){
       for(int i = 1; i<=c; i++)
           cout<<"*";
        for(int s=1;s<=2*(4-c);s++)
           cout<<" ";
        for(int d=c; d>=1; d--)
           cout<<"*";
           cout<<endl;
           }
      for(int c=4;c>=1;c--){
       for(int i = c; i>=1; i--)
           cout<<"*";
        for(int s=1;s<=2*(4-c);s++)
           cout<<" ";
        for(int d=c; d>=1; d--)
           cout<<"*";
           cout<<endl;
           }


    return 0 ;
}