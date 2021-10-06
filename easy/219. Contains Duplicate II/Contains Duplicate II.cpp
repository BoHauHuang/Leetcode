class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int n = nums.size();
        map<int, int> vis;
        for(int i = 0 ; i < n ; i++){
            if(!vis[nums[i]]) vis[nums[i]] = i+1;
            else{
                if(abs(vis[nums[i]]-1 - i) <= k) return true;
                else vis[nums[i]] = i+1;
            }
        }
        return false;
    }
};
