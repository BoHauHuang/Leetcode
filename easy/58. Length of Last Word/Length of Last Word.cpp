class Solution {
public:
    int lengthOfLastWord(string s) {
        bool start = false;
        int ans = 0, i = s.length()-1;
        for(; i >= 0 ; i--){
            if(s[i] == ' ' && start) return ans;
            if(s[i] != ' ' && !start) start = true;
            if(s[i] != ' ' && start) ++ans;
        }
        return ans;
    }
};
