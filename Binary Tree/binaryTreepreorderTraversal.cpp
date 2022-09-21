class Solution
{
    void helper(TreeNode *root, vector<int> &res)
    {
        if (!root)
            return;

        res.push_back(root->val);
        helper(root->left, res);
        helper(root->right, res);
    }

public:
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> res;

        helper(root, res);
        return res;
    }
};