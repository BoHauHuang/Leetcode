class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int, vector<int> > pool;
        vector<vector<int> > ans;
        for(int i = 0 ; i < groupSizes.size() ; i++)
            pool[groupSizes[i]].push_back(i);
        
        for(auto p : pool){
            vector<int> tmp;
            for(int i = 0 ; i < p.second.size() ; i++){
                tmp.push_back(p.second[i]);
                if(tmp.size() == p.first){
                    ans.push_back(tmp);
                    tmp.clear();
                }
            }
        }
        return ans;
    }
};
