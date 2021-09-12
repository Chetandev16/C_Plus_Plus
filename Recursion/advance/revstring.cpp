#include<iostream>

using namespace std;

void rev(string a)
{
    if(a.length() == 0)
    {
        return;
    }

    string ex = a.substr(1);
    rev(ex);
    cout<<a[0];
    
}
int main()
{
    string a = "binod";
    rev(a);
    return 0;
}