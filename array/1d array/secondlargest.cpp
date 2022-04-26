#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1000,1000,1000,1000,100};
    int max = INT_MIN, min = INT_MAX;

    for (int i = 0; i < 5; i++)
    {
        if(max<arr[i]) {
            max = arr[i];
            continue;
        }
        if(min>arr[i]){
            min = arr[i];
            continue;
        }
    }

    cout << max-min;
    return 0;
}