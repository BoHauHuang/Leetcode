class Solution {
public:
    void dfs(vector<vector<int> > &grid, int i, int j, int& tmp, int& m){
        if(!(i >= 0 && i < grid.size() && j >= 0 && j < grid[i].size() && grid[i][j])) return;
        grid[i][j] = 0;
        tmp++;
        m = max(m, tmp);
        dfs(grid, i-1, j, tmp, m);
        dfs(grid, i+1, j, tmp, m);
        dfs(grid, i, j-1, tmp, m);
        dfs(grid, i, j+1, tmp, m);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0, tmp = 0;
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[i].size() ; j++){
                if(grid[i][j]){
                    tmp = 0;
                    dfs(grid, i, j, tmp, ans);
                }
            }
        }
        return ans;
    }
};
