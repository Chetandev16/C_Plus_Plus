#include <bits/stdc++.h>

using namespace std;

class Test
{
private:
    int x;

public:
    Test(int i) : x(i)
    {
        cout << "constructor called " << x << endl;
    }
    ~Test()
    {
        cout << "destructor called " << x << endl;
    }
};

int main()
{
    // {
    //     Test t1;
    // }
    Test t1(10);
    Test t2(20);
    return 0;
}