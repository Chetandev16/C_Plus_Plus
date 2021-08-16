#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    cin>>a[i];
    int max=a[0],min=a[0];
    for(int j=0;j<n;j++)
    {
        for(int x=j;x<n;x++)
        {
            if(a[x]>max)
            max=a[x];

            if(a[x]<min)
            min=a[x];
        }
    }

    cout<<"Max= "<<max<<" Min= "<<min;

    return 0;
}