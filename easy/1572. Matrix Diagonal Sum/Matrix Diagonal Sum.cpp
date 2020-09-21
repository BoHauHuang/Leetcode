class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        int i, j, n = mat.size(), ans = 0;
        
        for(i = 0 ; i < n ; i++){
            ans += mat[i][i];
            ans += mat[i][n-i-1];
        }
        if(n%2) ans -= mat[(n-1)/2][(n-1)/2];
            
        return ans;
    }
};
