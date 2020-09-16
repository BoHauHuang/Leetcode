class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int m = 0;
        for(auto c : candies)
            m = max(c, m);
        for(auto c : candies)
            ans.push_back((c+extraCandies >= m));
        return ans;
    }
};
