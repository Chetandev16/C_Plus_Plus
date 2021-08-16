#include<iostream>
#include<cmath>

using namespace std;

void prime(int a, int b){
    int grtr,less,count=0;
    if(a>b){
        grtr=a;
        less=b;
        
    }
    else{
        grtr=b;
        less=a;
    }
    for(int i=less;i<grtr; i++)
    {  
        for(int j=2;j<=(i/2);j++)
        {
            if(i%j == 0){
                count++;
            }
        }
        if(count==0)
        {
            cout<<i<<" ";
        }
        count = 0;
    }

}

int main() {
    int num1,num2;
    cin>>num1>>num2;
    
    prime(num1,num2);
    return 0;
}