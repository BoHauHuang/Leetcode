class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        
        int i, j, len, n = arr.size(), ans = 0;
        for(len = 1 ; len <= n ; len+=2){
            for(i = 0 ; i+len-1 < n ; i++){
                for(j = i ; j < i+len ; j++){
                    ans += arr[j];
                }
            }
        }
        
        return ans;
    }
};
