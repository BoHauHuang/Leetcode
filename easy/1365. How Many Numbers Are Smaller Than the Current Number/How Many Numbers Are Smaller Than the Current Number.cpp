class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int pre[101];
        memset(pre, 0, sizeof(pre));
        vector<int> tmp = nums, ans;
        sort(tmp.begin(), tmp.end());
        
        for(int i = 0 ; i < tmp.size() ; i++)
            pre[tmp[i]]++;
        for(int i = 1 ; i < 101 ; i++)
            pre[i] += pre[i-1];
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]) ans.push_back(pre[nums[i]-1]);
            else ans.push_back(0);
        }
            
        return ans;
    }
};
