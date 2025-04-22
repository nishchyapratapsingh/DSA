bool arraySortedOrNot(int arr[], int n)
{
    // Code Here
    if (n == 0 || n == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }

    else
        return arraySortedOrNot(arr + 1, n - 1);

    return false;
}
