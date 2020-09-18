class Solution {
public:
    int xorOperation(int n, int start) {
        int ans = start;
        while(--n)
            ans ^= (start+2*n);
        return ans;
    }
};
