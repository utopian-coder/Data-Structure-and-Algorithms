class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        if (root == nullptr)
            return {};

        vector<vector<int>> res;

        queue<TreeNode *> qu;
        qu.push(root);

        while (qu.size() != 0)
        {
            int len = qu.size();
            vector<int> temp;

            for (int i = 0; i < len; i++)
            {
                TreeNode *frontNode = qu.front();
                temp.push_back(frontNode->val);
                qu.pop();

                if (frontNode->left)
                    qu.push(frontNode->left);
                if (frontNode->right)
                    qu.push(frontNode->right);
            }

            res.push_back(temp);
        }

        return res;
    }
};