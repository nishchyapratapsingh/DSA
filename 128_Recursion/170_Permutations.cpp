void backtrack(string &str, vector<string> &result, vector<bool> &visited, string currStr)
{
    if (currStr.length() == str.length())
    {
        result.push_back(currStr);
        return;
    }

    for (int i = 0; i < str.length(); i++)
    {
        if (visited[i])
            continue;
        visited[i] = true;
        currStr.push_back(str[i]);
        backtrack(str, result, visited, currStr);
        currStr.pop_back();
        visited[i] = false;
    }
}

vector<string> generatePermutations(string &str)
{
    // write your code here
    vector<string> result;
    vector<bool> visited(str.length(), false);
    backtrack(str, result, visited, "");
    sort(result.begin(), result.end());
    return result;
}

// optimised

class Solution
{

    void backtrack(vector<int> nums, vector<vector<int>> &result, int index)
    {
        if (index >= nums.size())
        {
            result.push_back(nums);
            return;
        }

        for (int j = index; j < nums.size(); j++)
        {
            swap(nums[j], nums[index]);
            backtrack(nums, result, index + 1);
            swap(nums[j], nums[index]);
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> result;
        backtrack(nums, result, 0);
        return result;
    }
};