class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        int vis[n];
        priority_queue<pair<int, int> > q;
        int ans = 0, cur = 0, cnt = 1;
        memset(vis, 0, sizeof(vis));
        
        while(cnt < points.size()){
            vis[cur] = 1;
            while(q.size() && vis[q.top().second]) q.pop();
            for(int i = 0 ; i < n ; i++){
                if(vis[i] == 0){
                    int len = abs(points[i][0]-points[cur][0])+abs(points[i][1]-points[cur][1]);
                    q.push(make_pair(-len, i));
                }
            }
            
            ans -= q.top().first;
            cur = q.top().second;
            cnt++;
        }
        return ans;
    }
};
