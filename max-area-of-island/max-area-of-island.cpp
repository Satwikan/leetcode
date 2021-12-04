class Solution {
public:
    vector<vector<int>> grid;
    int dfs(int r, int c){
        if (r < 0 || r >= this->grid.size() || c < 0 || c >= this->grid[0].size() || this->grid[r][c] == 0)
            return 0;
        this->grid[r][c] = 0;
        return (1 + dfs(r+1, c) + dfs(r-1, c)
                  + dfs(r, c-1) + dfs(r, c+1));
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        this->grid = grid;
        int maxArea = 0;
        for (int i = 0; i < grid.size(); i++)
            for (int j = 0; j < grid[i].size(); j++)
                if (this->grid[i][j] == 1) maxArea = max(maxArea, dfs(i, j));
        
        return maxArea;
    }
};