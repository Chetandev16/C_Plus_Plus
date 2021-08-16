#include<iostream>
using namespace std;
int linearsearch(int a[] , int n, int search){
     for(int j=0;j<5;j++){
        if(a[j] == search){
            return j;
        }
        
    }
    return -1;
}
 
int main() {
     
    int a[5],search;
    for (int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"enter what you want to search"<<endl;
    cin>>search;
    
    cout << linearsearch(a, 5 , search);

    return 0;
}