#include<iostream>
using namespace std;

int xd(int x)
    {
        int temp=x,sum=0;
        while(temp!=0)
        {
            sum = sum+(temp%10);
            temp/=10;
        }
        cout<<sum<<endl;
        return sum;
    }
int isPossible(int N, int arr[]){
       int temp,sum = 0;
        for(int i=0;i<N;i++)
        {
            temp = arr[i];
            sum = sum + xd(temp);
        }
        cout<<sum<<endl;
        if(sum%3==0)
        return 1;
        else
        return 0;
    }


int main() {
    int N;
    cin>>N;
    int arr[N];
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
     cout<<isPossible(N,arr);
    return 0;
}