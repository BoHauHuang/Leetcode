// mapping character and check whether it is smaller than the right one
// AC, 8 ms, 8.2 MB

class Solution {
public:
	int exchange(char c){ return (c == 'I')? 1 : (c == 'V')? 5 : (c == 'X')? 10 : (c == 'L')? 50 : (c == 'C')? 100 : (c == 'D')? 500 : 1000; }
    
	int romanToInt(string s) {
        int ans = exchange(s[s.size()-1]);
        for(int i = s.size()-2 ; i >= 0 ; i--)
        	ans += exchange(s[i])+ exchange(s[i])*(exchange(s[i]) < exchange(s[i+1]))*(-2);
		
		return ans;
    }
};
