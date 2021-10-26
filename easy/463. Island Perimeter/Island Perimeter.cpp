class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        if(grid.size() == 0) return 0;
        int ans = 0, n = grid.size();
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < grid[0].size() ; j++){
                if(grid[i][j]){
                    ans += !(i && grid[i-1][j]) + !(i+1 < n && grid[i+1][j]) + !(j && grid[i][j-1]) + !(j+1 < grid[0].size() && grid[i][j+1]);
                }
            }
        }
        return ans;
    }
};
