#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int s, int m, int e, int &cnt)
{
    int left = s;
    int right = m + 1;
    vector<int> temp;

    while (left < m + 1 && right <= e)
    {
        if (arr[left] > arr[right])
        {
            cnt += m - left + 1;
            temp.push_back(arr[right++]);
        }
        else
        {
            temp.push_back(arr[left++]);
        }
    }
    while (left < m + 1)
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

void mergeSort(vector<int> &arr, int s, int e, int &cnt)
{
    if (s >= e)
    {
        return;
    }

    int m = s + (e - s) / 2;

    mergeSort(arr, s, m, cnt);
    mergeSort(arr, m + 1, e, cnt);

    merge(arr, s, m, e, cnt);
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0;
    mergeSort(arr, 0, n - 1, cnt);
    cout << cnt << endl;
}