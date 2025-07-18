// PreOrder

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

// Inorder

class Solution
{
public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node *root)
    {
        // Your code here
        stack<Node *> s;
        Node *node = root;
        vector<int> inorderT;

        while (true)
        {
            if (node != NULL)
            {
                s.push(node);
                node = node->left;
            }
            else
            {
                if (s.empty())
                    break;
                node = s.top();
                s.pop();
                inorderT.push_back(node->data);
                node = node->right;
            }
        }

        return inorderT;
    }
};

// Postorder using two stacks

class Solution
{
public:
    // Function to return a list containing the postorder traversal of the tree.
    vector<int> postOrder(Node *root)
    {
        // Your code here
        vector<int> ans;
        stack<Node *> st;
        stack<Node *> st2;

        st.push(root);
        while (!st.empty())
        {
            Node *node = st.top();
            st.pop();
            st2.push(node);
            if (node->left != NULL)
                st.push(node->left);
            if (node->right != NULL)
                st.push(node->right);
        }

        while (!st2.empty())
        {
            ans.push_back(st2.top()->data);
            st2.pop();
        }

        return ans;
    }
};

// Postorder using one stack

vector<int> Solution::postorderTraversal(TreeNode *A)
{

    vector<int> ans;

    stack<TreeNode *> st;
    TreeNode *current = A;
    TreeNode *lastvisited = nullptr;

    while (!st.empty() || current)
    {
        if (current)
        {
            st.push(current);
            current = current->left;
        }
        else
        {
            TreeNode *peek = st.top();
            if (peek->right && lastvisited != peek->right)
            {
                current = peek->right;
            }
            else
            {
                ans.push_back(peek->val);
                lastvisited = peek;
                st.pop();
            }
        }
    }

    return ans;
}