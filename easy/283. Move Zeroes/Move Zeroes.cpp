class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int n = nums.size(), pos = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i]) nums[pos++] = nums[i];
        }
        for(int i = pos ; i < n ; i++){
            nums[i] = 0;
        }
    }
};
