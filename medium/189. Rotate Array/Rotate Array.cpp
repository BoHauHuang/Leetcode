class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k){
            vector<int> ans;
            
            if(k > nums.size()) k %= nums.size();
            
            for(int i = nums.size()-k ; i < nums.size() ; i++){
                ans.push_back(nums[i]);
            }
            for(int i = 0 ; i < nums.size()-k ; i++){
                ans.push_back(nums[i]);
            }
            
            for(int i = 0 ; i < nums.size() ; i++){
                nums[i] = ans[i];
            }
        }
    }
};
