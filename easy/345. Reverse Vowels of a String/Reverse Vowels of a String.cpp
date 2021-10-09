class Solution {
public:
    string reverseVowels(string s) {
        stack<char> vol;
        for(auto x : s){
            if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') vol.push(x);
        }
        for(auto &x : s){
            if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U'){
                x = vol.top();
                vol.pop();
            }
        }
        return s;
    }
};
