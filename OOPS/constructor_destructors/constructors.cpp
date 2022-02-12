#include <bits/stdc++.h>

using namespace std;

class Point
{
private:
    int x, y ,z;

public:
    Point() : x(0), y(0) // initializer list
    {
        z=0;
    }
    Point(int x1, int y1 , int z1) : z(z1)
    {
        x = x1;
        y = y1;
    }
    void print()
    {
        cout << x << " " << y <<" "<< z <<endl;
    }
};

int main()
{
    Point p1, p2(10, 20 ,30);
    p1.print(); // in general we use . to access class members
    p2.print();
    Point *ptr = new Point(5, 10 ,15); // dynamic point
    ptr->print();                  // for pointer we use -> to access class members
    return 0;
}