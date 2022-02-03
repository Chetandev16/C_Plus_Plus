#include <bits/stdc++.h>

using namespace std;

int main()
{
    //random access iterator can be treated as pointer but in some cases we cannot treat iterators is pointers
    vector<int> v = {10, 20, 30, 40, 100};
    vector<int>::iterator i = v.begin(); // auto i;
    cout << (*i) << " ";
    i++;
    cout << (*i) << " ";
    i = v.end();
    i--;
    cout << (*i) << " ";
    cout<<endl;    
    //NEXT FUNCTION
    i = v.begin();
    i=next(i);
    cout<<(*i)<<" ";
    i = next(i,2);
    cout<<(*i)<<" ";
    i = prev(i);
    cout<<(*i)<<" ";
    cout<<endl; 
    //advance iterato

    i =  v.begin();
    advance(i,3);
    cout<<(*i)<<" ";
    return 0;
}