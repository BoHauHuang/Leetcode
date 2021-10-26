class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        vector<int> ans;
        
        for(int i = 0 ; i < nums.size() ; i++){
            int idx = abs(nums[i])-1;
            if(nums[idx] < 0) ans.push_back(idx+1);
            else nums[idx] = -nums[idx];
        }
        
        return ans;
    }
};
