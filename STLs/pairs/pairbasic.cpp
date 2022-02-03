#include<utility>
#include<iostream>


using namespace std;
//pair is templeted structure in c++


int main(){
    pair<int , int> p1;
    // p1 = {10,20};
    p1 = make_pair(10,20); //make pair function
    pair<int , string> p2(10,"chetan");
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    return 0;
}