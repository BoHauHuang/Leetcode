class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        if(n == 2) return max(nums[0], nums[1]);
        
        int dp[n], ans = 0;
        memset(dp, 0, sizeof(dp));
        
        dp[0] = nums[0];
        dp[1] = nums[1];
        ans = max(dp[1], dp[0]);
        for(int i = 2 ; i < n ; i++){
            for(int j = i-2 ; j >= 0 ; j--){
                dp[i] = max(dp[i], dp[j]+nums[i]);
            }
            ans = max(dp[i], ans);
        }
        
        return ans;
    }
};
