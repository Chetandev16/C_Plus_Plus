#include <iostream>

using namespace std;

void pireplace(string a)
{
    if(a.length() == 0)
        return;

    if(a[0] == 'p' && a[1] == 'i'){
        cout<<"3.14";
        pireplace(a.substr(2));
    }
    else {
        cout<<a[0];
        pireplace(a.substr(1));
    }

}

int main()
{
    pireplace("pipxxpxpvppipi");
}