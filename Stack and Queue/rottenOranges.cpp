class Solution
{
public:
    int orangesRotting(vector<vector<int>>& grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        
        int vis[m][n];
        
        queue<pair<pair<int, int>, int>> rottenOranges;
        
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 2)
                {
                    rottenOranges.push({{i, j}, 0});
                    vis[i][j] = 2;
                }
                else
                {
                    vis[i][j] = 0;
                }
            }
        }
        
        int time = 0;
        int delRow[4] = {0, -1, 0, 1};
        int delCol[4] = {-1, 0, 1, 0};
        
        while(!rottenOranges.empty())
        {
            int currRow = rottenOranges.front().first.first;
            int currCol = rottenOranges.front().first.second;
            int currTime = rottenOranges.front().second;
            
            rottenOranges.pop();
            
            time = max(time, currTime);
            cout << time << " ";
            
            for (int i = 0; i < 4; i++)
            {
                int row = currRow + delRow[i];
                int col = currCol + delCol[i];
                
                if (row >= 0 && row < m && col >= 0 && col < n && vis[row][col] != 2 && grid[row][col] == 1)
                {
                    vis[row][col] = 2;
                    rottenOranges.push({{row, col}, currTime + 1});
                }
            }
        }
        
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (vis[i][j] != 2 && grid[i][j] == 1)
                {
                    return -1;
                }
            }
        }
        
        return time;
    }
};