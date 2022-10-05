class Solution
{
    void helper(TreeNode *root, int val, int depth, int currDepth)
    {
        if (root == nullptr)
            return;

        if (currDepth == depth)
        {
            TreeNode *newLeft = new TreeNode(val);
            TreeNode *newRight = new TreeNode(val);
            TreeNode *prevLeft = root->left;
            TreeNode *prevRight = root->right;
            root->left = newLeft;
            root->right = newRight;
            newLeft->left = prevLeft;
            newRight->right = prevRight;

            return;
        }

        helper(root->left, val, depth, currDepth + 1);
        helper(root->right, val, depth, currDepth + 1);
    }

public:
    TreeNode *addOneRow(TreeNode *root, int val, int depth)
    {
        if (depth == 1)
        {
            TreeNode *newRoot = new TreeNode(val);
            newRoot->left = root;

            return newRoot;
        }

        helper(root, val, depth, 2);

        return root;
    }
};