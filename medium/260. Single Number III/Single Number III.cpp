class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long int n = 0;
        for(auto x : nums){
            n ^= x;
        }
        n &= (-n);
        vector<int> ans;
        long long int n1 = 0, n2 = 0;
        for(auto x : nums){
            if((x&n) == 0) n1 ^= x;
            else n2 ^= x;
        }
        ans.push_back(n1);
        ans.push_back(n2);
        return ans;
    }
};
