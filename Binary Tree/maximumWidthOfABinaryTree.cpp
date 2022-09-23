class Solution
{
public:
    int widthOfBinaryTree(TreeNode *root)
    {
        if (!root)
            return 0;

        int res = 0;

        queue<pair<TreeNode *, int>> qu;
        qu.push({root, 0});

        while (!qu.empty())
        {
            int first, last;

            int size = qu.size();
            int prevLevelMinIndex = qu.front().second;

            for (int i = 0; i < size; i++)
            {
                TreeNode *frontNode = qu.front().first;
                int currNodeIdx = qu.front().second - prevLevelMinIndex;
                qu.pop();

                if (i == 0)
                    first = currNodeIdx;
                if (i == size - 1)
                    last = currNodeIdx;

                if (frontNode->left)
                    qu.push({frontNode->left, (long long)currNodeIdx * 2 + 1});
                if (frontNode->right)
                    qu.push({frontNode->right, (long long)currNodeIdx * 2 + 2});
            }

            res = max(res, last - first + 1);
        }

        return res;
    }
};