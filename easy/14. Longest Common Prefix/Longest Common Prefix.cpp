class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int n = strs[0].size();
        for(int i = 0 ; i < strs.size() ; i++){
            n = (n > strs[i].size())? strs[i].size() : n;
        }
        
        for(int j = 0 ; j < n ; j++){
            bool same = true;
            for(int i = 0 ; i < strs.size() ; i++){
                same &= (strs[i][j] == strs[0][j]);
            }
            if(!same) break;
            else ans += strs[0][j];
        }
        return ans;
    }
};
