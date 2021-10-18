class Solution {
public:
    bool is_alph(char c){
        return ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'));
    }
    vector<string> letterCasePermutation(string s) {
        int n = s.size();
        map<string, int> vis;
        string tmp = s;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] >= 'A' && s[i] <= 'Z') tmp[i] = tmp[i]-'A'+'a';
        }
        
        for(int i = 0 ; i < (1<<n) ; i++){
            string t = tmp;
            for(int j = 0 ; j < n ; j++){
                if((i&(1<<j)) && is_alph(tmp[j])){
                    t[j] = t[j]-'a'+'A';
                }
            }
            vis[t] = 1;
        }
        
        vector<string> ans;
        for(auto x:vis){
            ans.push_back(x.first);
        }
        return ans;
    }
};
