// Recursion
bool isScramble(string s1, string s2)
{
    if (s1.compare(s2) == 0)
        return true;
    if (s1.length() <= 1)
        return false;
    int n = s1.length();
    for (int i = 1; i < n; i++)
    {
        bool cond1 = isScramble(s1.substr(0, i), s2.substr(n - i, i)) && isScramble(s1.substr(i, n - i), s2.substr(0, n - i));
        bool cond2 = isScramble(s1.substr(0, i), s2.substr(0, i)) && isScramble(s1.substr(i, n - i), s2.substr(i, n - i));
        if (cond1 || cond2)
            return true;
    }
    return false;
}

// Memoisation

