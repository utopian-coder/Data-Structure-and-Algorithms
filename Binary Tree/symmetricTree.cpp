class Solution 
{
    bool helper(TreeNode* l, TreeNode* r)
    {
        if (!l && !r) return true;
        if (!l || !r) return false;
        else if (l->val != r->val) return false;
        
        return helper(l->left, r->right) && helper(l->right, r->left);
    }
public:
    bool isSymmetric(TreeNode* root) 
    {
        if (!root) return true;
        return helper(root->left, root->right);
    }
};