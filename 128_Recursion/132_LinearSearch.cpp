// Using recursion

int linearSearch(int arr[], int n, int k)
{

    if (n == 0)
    {
        return -1;
    }
    if (arr[0] == k)
    {
        return 0;
    }

    int index = linearSearch(arr + 1, n - 1, k);
    if (index == -1)
    {
        return -1;
    }
    else
    {
        return index + 1;
    }
}
