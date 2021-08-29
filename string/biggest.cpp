#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    string x;
    getline(cin, x);
    sort(x.begin(),x.end());
    cout<<x;

    reverse(x.begin(), x.end());

    cout<<endl<<x;
    
    return 0;
}