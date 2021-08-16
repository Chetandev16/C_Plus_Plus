#include<iostream>
using namespace std;

int main() 
  {
     int a,b,c;
      cout<<"enter 3 numbers:-";
      cin>>a>>b>>c;
      if(a>b && a>c)
       {
           cout<<a<<" is greatest!";
       }else if(b>c && b>a){
           cout<<b<<" is greatest!";
        }else{
            cout<<c<<" is greatest!";
        } 
    int x;
    cin>>x;
    if(x%2==0)
    {
        cout<<"even!";
    }else
    {
        cout<<"odd!";
    }
 return 0;
  }