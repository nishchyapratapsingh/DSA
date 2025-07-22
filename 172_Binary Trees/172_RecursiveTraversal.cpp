void inorderT(TreeNode *root, vector<int> &inorder)
{
    if (!root)
    {
        return;
    }

    inorderT(root->left, inorder);
    inorder.push_back(root->data);
    inorderT(root->right, inorder);
}
void postorderT(TreeNode *root, vector<int> &postorder)
{
    if (!root)
    {
        return;
    }

    postorderT(root->left, postorder);
    postorderT(root->right, postorder);
    postorder.push_back(root->data);
}
void preorderT(TreeNode *root, vector<int> &preorder)
{
    if (!root)
    {
        return;
    }
    preorder.push_back(root->data);
    preorderT(root->left, preorder);
    preorderT(root->right, preorder);
}

vector<vector<int>> getTreeTraversal(TreeNode *root)
{
    // Write your code here.
    vector<vector<int>> ans;
    vector<int> inorder;
    inorderT(root, inorder);

    vector<int> preorder;
    preorderT(root, preorder);

    vector<int> postorder;
    postorderT(root, postorder);

    ans.push_back(inorder);
    ans.push_back(preorder);
    ans.push_back(postorder);

    return ans;
}