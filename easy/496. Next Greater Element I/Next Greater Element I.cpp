class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int, int> vis;
        stack<int> tmp;
        for(auto x:nums2){
            while(tmp.size() && tmp.top() < x){
                vis[tmp.top()] = x;
                tmp.pop();
            }
            tmp.push(x);
        }
        for(auto x:nums1){
            if(vis[x]) ans.push_back(vis[x]);
            else ans.push_back(-1);
        }
        return ans;
    }
};
