//PreOrder

class Solution
{
public:
    // Function to return a list containing the preorder traversal of the tree.
    vector<int> preorder(Node *root)
    {
        // write code here
        vector<int> ans;
        if (!root)
            return ans;
        stack<Node *> s;

        s.push(root);

        while (!s.empty())
        {
            root = s.top();
            s.pop();
            ans.push_back(root->data);
            if (root->right != NULL)
                s.push(root->right);
            if (root->left != NULL)
                s.push(root->left);
        }

        return ans;
    }
};