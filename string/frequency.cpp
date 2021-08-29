#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    string x;
    getline(cin,x);
    
    int f[26];

    for(int i=0;i<26;i++)
    {
        f[i]=0;
    }
    
    for(int i=0;i<x.size();i++)
    {
        f[x[i]-'a']++;
    }
    
    char ans='a';
    
    int max=0;

    for(int j=0;j<26;j++)
    {
        if(f[j]>max)
        {
            max =f[j];
            ans = j+'a';
        }
    }

    cout<<max<<endl<<ans;
    return 0;
}