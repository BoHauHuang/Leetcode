// sliding window with size 128 (because all chars can be represented by ASCII)
// AC, 4ms, 9.2 MB

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    	int left = 0, right = 0, ans = 0;
    	int vis[128];
    	memset(vis, 0, sizeof(vis));
    	while(left < s.size() && right < s.size()){
    		// exclude the left char
    		if(vis[s[right]]) vis[s[left++]] = 0;
			else{
				// include the right char
				vis[s[right++]] = 1;
				ans = (right-left > ans)? right-left : ans;
			}
		}
    	
		return ans;
    }
};
