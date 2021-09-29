class Solution {
public:
    int climbStairs(int n) {
        int dp[46] = {0}, i = 3;
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;
        for(; i < 46 ; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};
