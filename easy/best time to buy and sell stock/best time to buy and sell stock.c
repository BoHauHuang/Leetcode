// did not use DP
// AC: 304 ms

int maxProfit(int* prices, int pricesSize) {
    int profit = 0;
    int buy, sell;
    for(buy = 0 ; buy < pricesSize ; buy++){
        for(sell = buy+1 ; sell < pricesSize ; sell++){
            if(prices[buy] < prices[sell] && prices[sell]-prices[buy] > profit) profit = prices[sell]-prices[buy];
        }
    }
    return profit;
}
