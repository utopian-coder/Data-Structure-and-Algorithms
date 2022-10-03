class Solution
{
    int helper(TreeNode *root, int &maxi)
    {
        if (!root)
            return 0;

        int l = helper(root->left, maxi);
        int r = helper(root->right, maxi);

        maxi = max(maxi, (l + r));

        return 1 + max(l, r);
    }

public:
    int diameterOfBinaryTree(TreeNode *root)
    {
        int maxi = INT_MIN;
        helper(root, maxi);
        return maxi;
    }
};