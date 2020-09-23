class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        
        unordered_map<string, int> vis;
        int i, n = paths.size();
        for(i = 0 ; i < n ; i++)
            vis[paths[i][0]] = 1;
        for(i = 0 ; i < n ; i++)
            if(!vis[paths[i][1]]) return paths[i][1];
        return NULL;
    }
};
