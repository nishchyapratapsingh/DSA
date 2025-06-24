// Standard sliding window approach

class Solution
{
public:
    int numberOfSubstrings(string s)
    {
        int n = s.length();
        int l = 0;
        unordered_map<char, int> freqMap;
        int count = 0;

        for (int r = 0; r < n; r++)
        {
            freqMap[s[r]]++;
            while (freqMap['a'] > 0 && freqMap['b'] > 0 && freqMap['c'] > 0)
            {
                count += n - r;
                freqMap[s[l]]--;
                l++;
            }
        }

        return count;
    }
};

// Optimised approach - min Index - faster in practice
class Solution
{
public:
    int numberOfSubstrings(string s)
    {
        int abc[3] = {-1, -1, -1};
        int count = 0;
        for (int right = 0; right < s.length(); ++right)
        {
            abc[s[right] - 'a'] = right;
            count += 1 + min({abc[0], abc[1], abc[2]});
        }
        return count;
    }
};
