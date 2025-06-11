int makeBeautiful(string str)
{
    // Write your code here
    int n = str.length();
    string bStringA;
    string bStringB;
    char a = '0';
    char b = '1';
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            a = bStringA[i - 1] == '0' ? '1' : '0';
            b = bStringB[i - 1] == '0' ? '1' : '0';
        }
        bStringA.push_back(a);
        bStringB.push_back(b);
    }
    int diff1 = 0;
    int diff2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] != bStringA[i])
        {
            diff1++;
        }
        if (str[i] != bStringB[i])
        {
            diff2++;
        }
    }

    return min(diff1, diff2);
}