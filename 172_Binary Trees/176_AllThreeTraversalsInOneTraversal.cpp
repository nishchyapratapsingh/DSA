vector<vector<int>> getTreeTraversal(TreeNode *root)
{
    // Write your code here.
    if (root == nullptr)
        return {};

    vector<vector<int>> ans;
    vector<int> preorder;
    vector<int> inorder;
    vector<int> postorder;
    stack<pair<TreeNode *, int>> st;
    st.push({root, 1});

    while (!st.empty())
    {
        auto &topnode = st.top();
        TreeNode *node = topnode.first;
        int &value = topnode.second;

        if (value == 1)
        {
            preorder.push_back(node->data);
            value++;
            if (node->left != nullptr)
            {
                st.push({node->left, 1});
            }
        }
        else if (value == 2)
        {
            inorder.push_back(node->data);
            value++;
            if (node->right != nullptr)
            {
                st.push({node->right, 1});
            }
        }
        else
        {
            postorder.push_back(node->data);
            st.pop();
        }
    }

    ans.push_back(inorder);
    ans.push_back(preorder);
    ans.push_back(postorder);

    return ans;
}