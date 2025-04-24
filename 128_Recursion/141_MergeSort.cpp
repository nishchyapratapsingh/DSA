#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int m, int e) 
{

    vector<int> temp;
    int left = s;
    int right = m + 1;

    while (left <= m && right <= e)
    {
        if (arr[left] < arr[right])
        {
            temp.push_back(arr[left++]);
        }
        else
        {
            temp.push_back(arr[right++]);
        }
    }

    while (left <= m)
    {
        temp.push_back(arr[left++]);
    }

    while (right <= e)
    {
        temp.push_back(arr[right++]);
    }

    for (int i = s; i <= e; i++)
    {
        arr[i] = temp[i - s];
    }
}

void mergeSort(int *arr, int s, int e) 
{

    if (s >= e)
    {
        return;
    }

    int m = s + (e - s) / 2;

    mergeSort(arr, s, m);
    mergeSort(arr, m + 1, e);

    merge(arr, s, m, e);
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

    mergeSort(arr, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;
}