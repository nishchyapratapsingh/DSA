#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(int *arr, int s, int e)
{
    int pivot = s;
    int pos = s;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < arr[pivot])
        {
            pos++;
        }
    }
    swap(arr[pivot], arr[pos]);
    int i = s;
    int j = e;
    while (i < pos && j > pos)
    {
        if (arr[j] < arr[pos] && arr[i] > arr[pos])
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        else if (arr[i] < arr[pos])
            i++;
        else if (arr[j] > arr[pos])
            j--;
    }
    return pos;
}

void quickSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int p = partition(arr, s, e);
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
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
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}