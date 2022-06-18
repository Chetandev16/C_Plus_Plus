#include<bits/stdc++.h>
using namespace std; 


void solve(int n){
    if(n <= 0){
        return;
    }
    if(n%2 != 0){
        cout<<n<<" ";
    }
    solve(n-1);
    if(n%2 == 0){
        cout<<n<<" ";
    }
}
// 7 5 1 2 4 6

int main()
{
    solve(7);
    return 0;
}