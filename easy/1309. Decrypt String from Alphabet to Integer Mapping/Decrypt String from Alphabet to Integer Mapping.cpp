class Solution {
public:
    string freqAlphabets(string s) {
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        
        string ans = "";
        for(int i = 0 ; i < s.size() ; i++){
            if(i+2 < s.size() && s[i+2] == '#'){
                ans += 'j' + (s[i]-'0'-1)*10 + s[i+1]-'0';
                i+=2;
            }
            else ans += 'a' + (s[i]-'0'-1);
        }
        return ans;
    }
};
