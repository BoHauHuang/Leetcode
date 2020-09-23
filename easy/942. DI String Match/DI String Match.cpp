class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> ans;
        int right = S.size(), left = 0;
        for(auto x : S){
            if(x == 'I') ans.push_back(left++);
            else ans.push_back(right--);
        }
        ans.push_back(right);
        return ans;
    }
};
