#include<iostream>
using namespace std;

int updatebit(int n,int pos,int val)
{
  int mask = ~(1<<pos);
  n= n & mask;
  return(n | (val<<pos));
}

int main()
{
    cout<<updatebit(5,2,0);
    return 0;
}