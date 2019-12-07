// if character is 'L' decrease the level, otherwise increase the level, if we got where level = 0 then that is a balanced split
// AC, 0 ms, 8.5 MB
class Solution {
public:
    int balancedStringSplit(string s) {
        int level = 0, ans = 0;
        for(auto c : s){
            (c == 'L')? level-- : level++;
            if(level == 0) ans++;
        }
        
        return ans;
    }
};
