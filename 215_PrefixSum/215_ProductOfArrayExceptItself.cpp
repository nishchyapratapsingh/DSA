// array
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> res;
        int n = nums.size();
        vector<int> prefix(n);
        prefix[0] = nums[0];
        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] * nums[i];
        }
        vector<int> suffix(n);
        suffix[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            suffix[i] = suffix[i + 1] * nums[i];
        }
        for (int i = 0; i < n; i++)
        {
            int lP = i == 0 ? 1 : prefix[i - 1];
            int rP = i == n - 1 ? 1 : suffix[i + 1];
            res.push_back(lP * rP);
        }
        return res;
    }
};

// O(1) extra space
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> res(n);
        res[0] = 1;
        for (int i = 1; i < n; i++)
        {
            res[i] = res[i - 1] * nums[i - 1];
        }
        int rProd = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            int lProd = res[i];
            res[i] = res[i] * rProd;
            rProd = rProd * nums[i];
        }
        return res;
    }
};
