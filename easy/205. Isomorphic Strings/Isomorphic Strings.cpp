class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> vis, collision;
        for(int i = 0 ; i < s.size() ; i++){
            if(!vis[s[i]]){
                if(collision[t[i]] && collision[t[i]] != s[i]) return false;
                vis[s[i]] = t[i];
                collision[t[i]] = s[i];
            }
            else if(t[i] != vis[s[i]]) return false;
            
            
        }
        return true;
    }
};
