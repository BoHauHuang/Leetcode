class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        int m = triangle[n-1].size();
        int dp[n][m], ans = INT_MAX;
        memset(dp, 0, sizeof(dp));
        
        for(int i = 0 ; i < n ; i++){
            m = triangle[i].size();
            for(int j = 0 ; j < m ; j++){
                if(i == 0) dp[i][j] = triangle[i][j];
                else{
                    if(j > 0){
                        if(j != m-1) dp[i][j] = triangle[i][j] + min(dp[i-1][j], dp[i-1][j-1]);
                        else dp[i][j] = triangle[i][j] + dp[i-1][j-1];
                    }
                    else dp[i][j] = triangle[i][j] + dp[i-1][j];
                }
            }
        }
        for(int i = 0 ; i < m ; i++){
            ans = min(dp[n-1][i], ans);
        }
        return ans;
    }
};
