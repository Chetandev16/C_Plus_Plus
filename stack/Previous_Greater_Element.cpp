#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[8] = {15, 10, 18, 12, 4, 6, 2, 8};
    // ans =     -1, 15, -1, 18, 12, 12, 6, 12
    // O(n2) approach

    cout << "-1 ";
    for (int i = 1; i < 8; i++)
    {
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[i] < arr[j])
            {
                cout << arr[j] << " ";
                break;
            }
        }

        if (j == -1)
            cout << "-1 ";
    }

    // optimal using stack o(n)

    cout << endl
         << "using stack:-" << endl;

    stack<int> s;
    s.push(arr[0]);
    cout << "-1 ";

    for (int i = 1; i < 8; i++)
    {
        while (s.empty() == false && s.top() < arr[i])
        {
            s.pop();
        }

        if (s.empty())
        {
            cout << "-1 ";
        }
        else
        {
            cout << s.top() << " ";
        }

        s.push(arr[i]);
    }
    return 0;
}