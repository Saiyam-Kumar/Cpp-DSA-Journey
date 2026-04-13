/*
  Best Time To Buy and Sell Stock -> Leetcode 121
  Optimal Approach -> O(n)
  For maxProfit -> Buy = min and Sell = max
  Imagine everyday as a stock buy day if the next day is max then we get profit
  Also change bestBuy -> if we get min so we change it.
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int bestBuy = prices[0]; //considering every day as a buy day
        int n = prices.size();

        for(int i=1; i<n; i++){
            if(prices[i]>bestBuy){
                maxProfit = max(maxProfit,prices[i]-bestBuy);
            }
            bestBuy = min(bestBuy,prices[i]);
        }
        return maxProfit;
    }
};
