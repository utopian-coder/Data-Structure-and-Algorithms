vector<int> leftView(Node *root)
{
    if (!root)
        return {};

    vector<int> ans;

    queue<Node *> qu;
    qu.push(root);

    while (!qu.empty())
    {
        int n = qu.size();

        for (int i = 0; i < n; i++)
        {
            Node *frontNode = qu.front();
            if (i == 0)
                ans.push_back(frontNode->data);
            qu.pop();

            if (frontNode->left)
                qu.push(frontNode->left);
            if (frontNode->right)
                qu.push(frontNode->right);
        }
    }

    return ans;
}
