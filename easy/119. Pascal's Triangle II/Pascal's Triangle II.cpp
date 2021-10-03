class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int> > ans;
        vector<int> tmp;
        for(int i = 0 ; i <= rowIndex ; i++){
            tmp.clear();
            tmp.push_back(1);
            for(int j = 1 ; j < i ; j++){
                tmp.push_back(ans[i-1][j]+ans[i-1][j-1]);
            }
            if(i) tmp.push_back(1);
            ans.push_back(tmp);
        }
        return tmp;
    }
};
