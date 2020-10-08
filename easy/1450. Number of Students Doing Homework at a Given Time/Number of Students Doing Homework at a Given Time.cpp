class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        
        vector<int> check;
        int n = startTime.size(), i, ans = 0;
        for(i = 0 ; i < n ; i++)
            if(startTime[i] <= queryTime) check.push_back(i);
        for(i = 0 ; i < check.size() ; i++)
            if(endTime[check[i]] >= queryTime) ans++;
        
        return ans;
    }
};
