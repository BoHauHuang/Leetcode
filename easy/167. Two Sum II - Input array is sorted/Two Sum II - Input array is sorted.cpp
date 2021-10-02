class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size()-1, sum = 0;
        vector<int> ans;
        while(l < r){
            sum = numbers[l]+numbers[r];
            if(sum > target) r--;
            if(sum < target) l++;
            if(sum == target) break;
        }
        ans.push_back(l+1);
        ans.push_back(r+1);
        return ans;
    }
};
