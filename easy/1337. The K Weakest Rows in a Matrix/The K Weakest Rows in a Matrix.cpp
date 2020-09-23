class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        std::ios::sync_with_stdio(0);
        vector<int> ans;
        vector<pair<int, int> > q;
        int i, j, cnt = 0;
        for(i = 0 ; i< mat.size() ; i++){
            cnt = 0;
            for(j = 0 ; j < mat[i].size() ; j++){
                cnt += mat[i][j];
            }
            q.push_back(make_pair(cnt, i));
        }
        sort(q.begin(), q.end());
        
        for(int i = 0 ; i < k ; i++)
            ans.push_back(q[i].second);
        return ans;
    }
};
