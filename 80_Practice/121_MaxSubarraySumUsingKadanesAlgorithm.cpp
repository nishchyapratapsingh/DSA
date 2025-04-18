long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.
    if (n==0) return 0;
    long long maxsum=arr[0];
    long long currsum =arr[0];

    for (int i=1; i<n; i++) {
        currsum=max(currsum+arr[i], (long long)arr[i]);
        maxsum=max(currsum, maxsum);
    }

    return maxsum>0?maxsum:0;
}