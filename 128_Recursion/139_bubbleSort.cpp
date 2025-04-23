#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    // Write your code here
    if (n == 0)
        return;

    bool swapped = false;

    for (int j = 0; j < n - 1; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
            swapped = true;
        }
    }

    if (!swapped)
    { // no swapping happened -> already sorted
        return;
    }
    bubbleSort(arr, n - 1);
}

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;
}