class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);

        int m = mat.size(), n = mat[0].size();
        if(m == 1 || n == 1) return mat;
        int i, j;
        priority_queue<int, vector<int>, std::greater<int> > tmp;
        
        for(i = m ; i >= 0  ; i--){
            for(j = 0 ; i+j < m ; j++)
                tmp.push(mat[i+j][j]);

            for(j = 0 ; i+j < m ; j++){
                mat[i+j][j] = tmp.top();
                tmp.pop();
            }
        }
        for(i = 1 ; i < n ; i++){
            for(j = 0 ; j < m && i+j < n ; j++)
                tmp.push(mat[j][i+j]);

            for(j = 0 ; j < m && i+j < n ; j++){
                mat[j][i+j] = tmp.top();
                tmp.pop();
            }
        }

        return mat;
    }
};
