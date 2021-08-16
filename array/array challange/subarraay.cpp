#include<iostream> 

using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int curr;
    for(int j=0;j<n;j++)
    {   curr = 0;
        for(int x=j;x<n;x++)
        {
           curr = curr+arr[x];
           cout<<curr<<" ";
        }
        cout<<endl;
    }
    return 0;
}