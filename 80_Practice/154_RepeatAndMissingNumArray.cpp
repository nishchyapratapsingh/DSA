vector<int> Solution::repeatedNumber(const vector<int> &A)
{
    int n = A.size();
    vector<int> result(2);

    long long expectedSum = (1LL * n * (n + 1)) / 2;
    long long expectedSqSum = 1LL * expectedSum * (2 * n + 1) / 3;

    long long actualSum = 0;
    long long actualSqSum = 0;
    for (int i = 0; i < n; i++)
    {
        actualSum += A[i];
        actualSqSum += 1LL * A[i] * A[i];
    }

    long long sqDifference = actualSqSum - expectedSqSum;
    long long sumDifference = actualSum - expectedSum;

    long long sumXY = sqDifference / sumDifference;

    result[0] = (sumDifference + sumXY) / 2;
    result[1] = sumXY - result[0];

    return result;
}
