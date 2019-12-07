// count number of J is in S
// AC, 0 ms, 8.4 MB

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int is_j[128], ans = 0;
        memset(is_j, 0, sizeof(is_j));
        
        for(int i = 0 ; i < J.size() ; i++)
            is_j[J[i]] = 1;
        for(int i = 0 ; i < S.size() ; i++)
            ans += is_j[S[i]];
        
        return ans;
    }
};
