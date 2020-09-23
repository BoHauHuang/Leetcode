class Solution {
public:
    string mor[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<string, int> cnt;
        int i, n = words.size();
        string s;
        for(i = 0 ; i < n ; i++){
            s = "";
            for(auto c:words[i]){
                s = s+mor[c-'a'];
            }
            if(cnt[s] == 0) cnt[s] = 1;
            else cnt[s]++;
        }
        return cnt.size();
    }
};
