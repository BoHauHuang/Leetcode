class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> vis;
        int i, b;
        for(i = 0 ; i < nums.size() ; i++){
            b = target - nums[i];
            if(vis[b]){
                b = vis[b]-1;
                break;
            }
            vis[nums[i]] = i+1;
        }
        return {i, b};
    }
};
