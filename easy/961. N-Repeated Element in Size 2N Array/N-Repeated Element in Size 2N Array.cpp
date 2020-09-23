class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_map<int, int> vis;
        for(int i = 0 ; i < A.size() ; i++){
            if(vis[A[i]]) return A[i];
            else vis[A[i]] = 1;
        }
        
        return 0;
    }
};
