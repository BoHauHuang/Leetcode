class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        std::ios::sync_with_stdio(0);
        unordered_map<int, int> cnt;
        for(auto x : target)
            cnt[x]++;
        for(auto x : arr)
            cnt[x]--;
        for(auto x : cnt)
            if(x.second < 0) return false;
        
        return true;
    }
};
