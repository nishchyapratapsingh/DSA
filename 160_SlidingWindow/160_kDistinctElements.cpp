// 2 Problems
// 1-No of substrings with exactly k distinct elements
// 2-Longest substring with at most k distinct elements

// Sol 1
class Solution
{
    int cs(string &s, int k)
    {
        vector<int> freq(26, 0);
        int count = 0;
        int distinct = 0; // no of distinct char in current window
        int l = 0;

        for (int r = 0; r < s.length(); r++)
        {
            if (freq[s[r] - 'a'] == 0)
                distinct++;
            freq[s[r] - 'a']++;

            while (distinct > k)
            {
                freq[s[l] - 'a']--;
                if (freq[s[l] - 'a'] == 0)
                    distinct--;
                l++;
            }

            count += r - l + 1; // all substrings ending with r between l and r
        }

        return count;
    }

public:
    int countSubstr(string &s, int k)
    {
        // code here.
        return cs(s, k) - cs(s, k - 1); // at most k - at most (k-1) = exactly k
    }
};

// Sol 2
int kDistinctChars(int k, string &str)
{
    // Write your code here
    vector<int> freq(26, 0);
    int distinct = 0;
    int maxLen = 0;
    int r = 0;

    for (int r = 0; r < str.length(); r++)
    {
        if (freq[str[r] - 'a'] == 0)
            distinct++;
        freq[str[r] - 'a']++;

        while (distinct > k)
        {
            freq[str[l] - 'a']--;
            if (freq[str[l] - 'a'])
                distinct--;
        }

        maxLen = max(maxLen, r - l + 1);
    }

    return maxLen;
}
