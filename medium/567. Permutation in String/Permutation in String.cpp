class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        unordered_map<char, int> vis, tmp;
        for(auto x : s1){
            if(!vis[x]) vis[x] = 1;
            else vis[x]++;
        }
        tmp = vis;
        int cnt = 0;
        if(s1.size() == s2.size()){
            for(auto x : s2){
                if(!vis[x]) return false;
                else vis[x]--;
            }
            return true;
        }
        else if(s1.size() > s2.size()) return false;
        else{

            for(int i = 0 ; i < s2.size() ; i++){
                tmp = vis;
                cnt = 0;
                for(int j = i ; j < s2.size() ; j++){
                    if(!tmp[s2[j]]) break;
                    else{
                        tmp[s2[j]]--;
                        cnt++;
                    }
                    if(cnt == s1.size()) return true;
                }
            }
        }
        
        return false;
    }
};
