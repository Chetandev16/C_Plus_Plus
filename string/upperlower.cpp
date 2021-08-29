#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    string x;
    getline(cin, x);
    
    //transform(x.begin(), x.end(), x.begin(), ::toupper);
    //cout<<x;
    
    //transform(x.begin(), x.end(), x.begin(), ::tolower);
    //cout<<x;

    for(int i=0;i<x.length();i++)
    {
        x[i] = tolower(x[i]);
    }
    cout<<x<<endl;
    for(int i=0;i<x.length();i++)
    {
        x[i] = toupper(x[i]);
    }
    cout<<x<<endl;
    return 0;
}