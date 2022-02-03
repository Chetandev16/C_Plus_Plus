#include <bits/stdc++.h>

using namespace std;

int main()
{
    pair<int, int> p1(1, 12), p2(9, 12);
    cout << (p1 == p2) << " "
         << (p1 != p2) << " "
         << (p1 > p2) << " "  
         << (p1 < p2) << endl; //> && < always compare 1st value in pair

    return 0;
}