class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest_price = INT_MAX;
        int profit = 0;
        int curr_profit = 0;
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < lowest_price){
                lowest_price = prices[i];
            }
            curr_profit = prices[i] - lowest_price;
            if(profit < curr_profit){
                profit = curr_profit;
            }
        }
        return profit;
    }
};