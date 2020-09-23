class Solution {
public:
    string generateTheString(int n) {
        string ans = "";
        if(n%2 == 0){
            ans += 'a';
            n--;
        }
        for(int i = 1 ; i <= n ; i++){
            ans += 'b';
        }
        
        return ans;
    }
};
