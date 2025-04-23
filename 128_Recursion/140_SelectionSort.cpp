#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    if (n == 1)
    {
        return;
    }

    int si = 0;

    for (int j = 0; j < n; j++)
    {
        if (arr[j] < arr[si])
        {
            si = j;
        }
    }

    swap(arr[0], arr[si]);

    selectionSort(arr + 1, n - 1);
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

    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;
}