#include<bits/stdc++.h> 

using namespace std;

template <typename T>
T myMax(T x, T y){
    return (x>y)?x:y;
}


int main(){
    cout<<myMax<int>(3,6)<<endl;
    cout<<myMax<char>('c','p')<<endl;
    return 0;
}