#include <bits/stdc++.h>

using namespace std;

struct MyHash
{
    int BUCKET;
    list<int> *table;
    MyHash(int key)
    {
        BUCKET = key;
        table = new list<int>[key];
    }
    void insert(int key)
    {
        int a = key % BUCKET;
        table[a].push_back(key);
    }
    bool search(int key)
    {
        int a = key % BUCKET;
        for (auto x : table[a])
        {
            if (x == key)
            {

                return true;
            }
        }
        return false;
    }
    void remove(int key)
    {
        int rm = key % BUCKET;
        table[rm].remove(key);
        // list is a function in c++ stl used to remove given value from the list.
    }
};

int main()
{
    int arr[7] = {56, 21, 87, 24, 53, 89, 92};
    MyHash var(7);

    for (int i = 0; i < 7; i++)
    {
        var.insert(arr[i]);
    }

    cout << var.search(20) << endl;
    cout << var.search(56) << endl;
    cout << var.search(92) << endl;

    var.remove(89);
    cout << var.search(89) << endl;
    return 0;
}