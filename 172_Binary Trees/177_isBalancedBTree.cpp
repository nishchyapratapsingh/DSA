int height(TreeNode<int> *root)
{
    if (!root)
        return 0;
    int left = height(root->left);
    int right = height(root->right);

    return 1 + std::max(left, right);
}

bool isBalancedBT(TreeNode<int> *root)
{
    if (!root)
        return true;

    int leftH = height(root->left);
    int rightH = height(root->right);

    if (abs(leftH - rightH) > 1)
        return false;

    return isBalancedBT(root->left) && isBalancedBT(root->right);
}