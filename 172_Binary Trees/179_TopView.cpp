class Solution
{
public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        // code here

        if (!root)
            return {};

        queue<pair<Node *, int>> q;
        unordered_map<int, Node *> map;

        q.push({root, 0});
        vector<int> keys;
        vector<int> ans;

        while (!q.empty())
        {
            Node *node = q.front().first;
            int vlevel = q.front().second;
            q.pop();

            if (map[vlevel] == nullptr)
            {
                map[vlevel] = node;
            }

            if (node->left != nullptr)
                q.push({node->left, vlevel - 1});
            if (node->right != nullptr)
                q.push({node->right, vlevel + 1});
        }

        for (auto it = map.begin(); it != map.end(); it++)
        {
            keys.push_back(it->first);
        }

        sort(keys.begin(), keys.end());

        for (int key : keys)
        {
            ans.push_back(map[key]->data);
        }

        return ans;
    }
};