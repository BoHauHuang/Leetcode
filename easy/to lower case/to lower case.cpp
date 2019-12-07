// upper case to lower case
// AC, 0 ms, 8.1 MB

class Solution {
public:
    string toLowerCase(string str) {
        for(int i = 0 ; i < str.length() ; i++)
            if(str[i] >= 'A' && str[i] <= 'Z') str[i] += 'a'-'A';
        return str;
    }
};
