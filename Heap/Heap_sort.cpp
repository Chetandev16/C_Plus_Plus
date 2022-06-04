#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i)
{

    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[largest] < arr[left])
    {
        largest = left;
    }

    if (right < n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    int t = n - 1;
    while (t >= 1)
    {
        swap(arr[t], arr[0]);
        heapify(arr, t, 0);
        t--;
    }

    // for (int i = n - 1; i >= 0; i--)
    // {
    //     swap(arr[0], arr[i]);
    //     heapify(arr, i, 0);
    // }
}

int main()
{
    int arr[5] = {4, 1, 3, 9, 7};
    int n = 5;

    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, 5, i);
    }

    heapSort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
