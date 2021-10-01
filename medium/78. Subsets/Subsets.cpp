class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int> tmp;
        vector<vector<int> > ans;
        for(int i = 0 ; i < (1<<n) ; i++){
            tmp.clear();
            for(int j = 0 ; j < n ; j++){
                if((1<<j)&i) tmp.push_back(nums[j]);
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};
