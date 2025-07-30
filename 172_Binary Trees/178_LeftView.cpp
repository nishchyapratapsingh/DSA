class Solution
{
public:
    vector<int> ans;

    void helper(Node *root, int level)
    {
        if (!root)
        {
            return;
        }

        if (ans.size() < level)
        {
            ans.push_back(root->data);
        }
        helper(root->left, level + 1);
        helper(root->right, level + 1);
    }

    vector<int> leftView(Node *root)
    {
        // code here
        helper(root, 1);
        return ans;
    }
};