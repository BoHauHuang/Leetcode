class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> lis;
        for(int i = 0 ; i < nums.size() ; i++){
            int pos = lower_bound(lis.begin(), lis.end(), nums[i])-lis.begin();
            if(pos == lis.size()) lis.push_back(nums[i]);
            else lis[pos] = nums[i];
        }
        return lis.size();
    }
};
