class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        int ans = 0, i, j;
        for(i = 0 ; i < grid.size() ; i++){
            for(j = grid[i].size()-1 ; j >= 0 && grid[i][j] < 0 ; j--, ans++) ;
        }
        return ans;
    }
};
