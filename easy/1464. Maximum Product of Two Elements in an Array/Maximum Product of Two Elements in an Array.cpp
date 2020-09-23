class Solution {
public:
    int maxProduct(vector<int>& nums) {
        std::ios::sync_with_stdio(0);
        sort(nums.begin(), nums.end(), std::greater<int>());
        int ans = (--nums[0])*(--nums[1]);
        return ans;
    }
};
