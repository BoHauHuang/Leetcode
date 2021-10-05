class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        if(text1=="" || text2=="") return 0;

        int n = text1.size(), m = text2.size();
        int dp[n+1][m+1];
        memset(dp, 0, sizeof(dp));
        
        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= m ; j++){
                dp[i][j] = max(max(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1]+(text1[i-1] == text2[j-1]));
            }
        }
        return dp[n][m];
    }
};
