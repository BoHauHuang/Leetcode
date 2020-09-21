class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
    	std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        if(!grid.size() || !grid[0].size()) return 0;
        int x = grid[0].size(), y = grid.size();
        int h[x], v[y], i, j;
        long long ans = 0;
        for(i = 0 ; i < x ; i++)
        	h[i] = 0;
        for(i = 0 ; i < y ; i++)
			v[i] = 0;
			
        for(i = 0 ; i < grid.size() ; i++){
            for(j = 0 ; j < grid[i].size() ; j++){
                h[i] = max(h[i], grid[i][j]);
                v[i] = max(v[i], grid[j][i]);
            }
        }

        for(i =  0 ; i < grid.size() ; i++){
            for(j = 0 ; j < grid[i].size() ; j++){
                if(grid[i][j] != h[i] && grid[i][j] != v[j]){
                    ans += (min(h[i], v[j])-grid[i][j]);
                }
            }
        }
        return ans;
    }
};
