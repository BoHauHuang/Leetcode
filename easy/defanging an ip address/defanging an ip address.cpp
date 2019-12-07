// simple string manipulate
// AC, 4ms, 8.2 MB

class Solution {
public:
    string defangIPaddr(string address) {
        string ans = "";
        for(int i = 0 ; i < address.size() ; i++){
            if(address[i] <= '9' && address[i] >= '0') ans += address[i];
            if(address[i] == '.') ans += '[', ans += address[i], ans += ']';
        }
        return ans;
    }
};
