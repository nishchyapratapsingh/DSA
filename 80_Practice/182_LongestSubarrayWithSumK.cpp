class Solution
{
public:
    int longestSubarray(vector<int> &arr, int k)
    {
        // code here
        int sum = 0;
        unordered_map<int, int> map;
        int maxLen = 0;
        for (int i = 0; i < arr.size(); ++i)
        {
            sum += arr[i];
            if (sum == k)
            {
                maxLen = max(maxLen, i + 1);
            }
            if (map.find(sum - k) != map.end())
            {
                maxLen = max(maxLen, i - map[sum - k]);
            }
            if (map.find(sum) == map.end())
            {
                map[sum] = i;
            }
        }

        return maxLen;
    }
};