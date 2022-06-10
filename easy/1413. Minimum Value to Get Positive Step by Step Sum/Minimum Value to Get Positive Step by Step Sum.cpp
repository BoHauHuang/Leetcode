class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int m = nums[0], sum = 0;
        
        for(auto n : nums){
            sum += n;
            m = min(sum, m);
        }
        return ((m <= 0)? abs(m)+1 : 1);
    }
};
