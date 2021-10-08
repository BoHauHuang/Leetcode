class Solution {
public:
    string reverseWords(string &s) {
        int head = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == ' ') {
                reverse(s.begin()+head, s.begin()+i);
                head = i+1;
            }
        }
        reverse(s.begin()+head, s.end());
        return s;
    }
};
