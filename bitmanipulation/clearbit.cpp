#include<iostream>
using namespace std;

int clearbit(int n,int pos)
{
  return ((n & ~(1<<pos))!=0);
}

int main()
{
    cout<<clearbit(5,2);
    return 0;
}