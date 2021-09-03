#include<iostream>
using namespace std;

void dec(int n)
{  
    if(n==0)
    {
        return;
    }
    
    cout<<n<<" ";
    dec(n-1);
}

void incr(int n)
{  
    if(n==0)
    {
        return;
    }
    incr(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;

    dec(n);
    cout<<endl;
    incr(n);
    return 0;
}