class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans = prices;
        for(int i = 0 ; i < prices.size() ; i++){
            for(int j = i+1 ; j < prices.size() ; j++){
                if(prices[i]>=prices[j]){
                    ans[i] -= prices[j];
                    break;
                }
            }
        }
        return ans;
    }
};
