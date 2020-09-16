// sort and pick the number with even index
// AC, 32 ms, 11.3 MB 

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        sort(nums.begin(), nums.end());
        int ans = 0;
        for(int i = 0 ; i < nums.size() ; i+=2)
            ans += nums[i];
        
        return ans;
    }
};
