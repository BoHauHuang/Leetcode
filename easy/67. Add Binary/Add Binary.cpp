class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        if(a.size() < b.size()) swap(a, b);
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int len = b.size();
        
        bool carry = false;
        for(int i = 0 ; i < len ; i++){
            
            if(a[i] == b[i] && !carry){
                carry = (a[i] == '1' && b[i] == '1');
                ans = "0"+ans;
            }
            else if(a[i] == b[i] && carry){
                carry = (a[i] == '1' && b[i] == '1');
                ans = "1"+ans;
            }
            else if(a[i] != b[i] && carry){
                carry = 1;
                ans = "0"+ans;
            }
            else if(a[i] != b[i] && !carry){
                carry = 0;
                ans = "1"+ans;
            }
        }
        
        
        for(int i = len ; i < a.size() ; i++){
            if(a[i] == '1' && carry){
                carry = 1;
                ans = "0"+ans;
            }
            else if(a[i] == '1' && !carry){
                carry = 0;
                ans = "1"+ans;
            }
            else if(a[i] == '0' && carry){
                carry = 0;
                ans = "1"+ans;
            }
            else if(a[i] == '0' && !carry){
                carry = 0;
                ans = "0"+ans;
            }
        }
        if(carry) ans = "1"+ans;
        
        return ans;
    }
};
