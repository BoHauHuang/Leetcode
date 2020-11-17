class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> dp(num+1, 0);
        dp[0] = 0;
        if(num > 0){
            dp[1] = 1;
        
            for(int i = 2 ; i <= num ; i++){
                dp[i] = dp[i>>1] + (i%2);
            }
        }
        return dp;
    }
};
