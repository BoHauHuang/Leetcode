class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int INF = mat.size()+mat[0].size();
        int top = INF, left = INF, right = INF, bot = INF;
        for(int i = 0 ; i < mat.size() ; i++){
            for(int j = 0 ; j < mat[i].size() ; j++){
                if(mat[i][j] == 0) continue;
                top = INF;
                left = INF;
                if(i-1 >= 0) top = mat[i-1][j];
                if(j-1 >= 0) left = mat[i][j-1];
                mat[i][j] = min(top, left)+1;
            }
        }
        for(int i = mat.size()-1 ; i >= 0 ; i--){
            for(int j = mat[i].size()-1 ; j >= 0 ; j--){
                if(mat[i][j] == 0) continue;
                bot = INF;
                right = INF;
                if(i+1 < mat.size()) bot = mat[i+1][j];
                if(j+1 < mat[i].size()) right = mat[i][j+1];
                mat[i][j] = min(mat[i][j], min(bot, right)+1);
            }
        }
        return mat;
    }
};
