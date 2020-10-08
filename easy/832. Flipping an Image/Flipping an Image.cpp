class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(auto &x : A)
            reverse(x.begin(), x.end());
        for(auto &x : A){
            for(auto &y : x){
                y = (y==1)? 0 : 1;
            }
        }
        return A;
    }
};
