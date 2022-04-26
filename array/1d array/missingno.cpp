#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {91,200,13,500,421},n=5;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<<max;
}