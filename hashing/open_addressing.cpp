#include <bits/stdc++.h>

using namespace std;
// open addressing ..... linear probing
struct MyHash
{
    int *arr;
    int cap, size;
    MyHash(int c)
    {
        cap = c;
        size = 0;
        arr=new int[cap];
        for (int i = 0; i < cap; i++)
        {
            arr[i] = -1;
        }
    }

    int hash(int key)
    {
        return key % cap;
    }

    bool search(int key)
    {
        int s = hash(key);
        int i = s;
        while (arr[i] != -1)
        {
            if (arr[i] == key)
            {
                return true;
            }
            i = (i + 1) % cap;
            if (i == s)
            {
                return false;
            }
        }
        return false;
    }
    bool insert(int key)
    {
        if (size == cap)
        {
            return false;
        }
        int i = hash(key);
        if (arr[i] == key)
        {
            return false;
        }
        if (arr[i] == -1)
        {
            arr[i] = key;
            size++;
            return true;
        }
        else
        {
            while (arr[i] != -1 && arr[i] != -2 && arr[i] != key)
            {
                i = (i + 1) % cap;
            }
            arr[i] = key;
        }
    }
    bool erase(int key)
    {
        int h = hash(key);
        int i = h;
        while (arr[i] != -1)
        {
            if (arr[i] == key)
            {
                arr[i] = -2;
                return true;
            }
            i = (i + 1) % cap;
            if (i == h)
            {
                return false;
            }
        }
        return false;
    }
};

int main()
{
    MyHash mh(7);
    mh.insert(49);
    mh.insert(56);
    mh.insert(72);
    if (mh.search(56) == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    mh.erase(56);
    if (mh.search(56) == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}