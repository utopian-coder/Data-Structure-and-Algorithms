class Solution
{
    int helper(TreeNode *root, int &res)
    {
        if (!root)
            return 0;

        int left = max(0, helper(root->left, res));
        int right = max(0, helper(root->right, res));

        res = max(res, (left + right + root->val));

        return root->val + max(left, right);
    }

public:
    int maxPathSum(TreeNode *root)
    {
        int res = INT_MIN;
        helper(root, res);

        return res;
    }
};