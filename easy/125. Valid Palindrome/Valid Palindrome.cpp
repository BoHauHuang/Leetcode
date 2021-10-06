class Solution {
public:
    bool is_lowercase(char c){
        return (c <= 'z' && c >= 'a');
    }
    bool is_uppercase(char c){
        return (c <= 'Z' && c >= 'A');
    }
    bool is_num(char c){
        return (c <= '9' && c >= '0');
    }
    bool isPalindrome(string s) {
        string ss = "";
        for(auto x : s){
            if(is_lowercase(x) || is_uppercase(x) || is_num(x)) ss += ((is_uppercase(x))? x-'A'+'a' : x);
        }
        
        int r = ss.size()-1, l = 0;
        while(l < r){
            if(l == r) break;
            
            if(ss[l] != ss[r]) return false;
            else{
                l++;
                r--;
            }
        }
        return true;
    }
};
