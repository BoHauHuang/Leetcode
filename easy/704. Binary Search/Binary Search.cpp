class Solution {
public:
    int search(vector<int>& nums, int target) {     
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int r = nums.size()-1, l = 0, mid;
        
        while(l <= r){
            mid = l+(r-l)/2;
            if(nums[mid] > target) r = mid-1;
            else if(nums[mid] < target) l = mid+1;
            else return mid;
        }
        return -1;
    }
};
