//121 Best time to Buy and Sell Stock
// Problem Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0,bestBuy = prices[0];

        for(int i = 1; i < prices.size();i++){
         if(prices[i]  > bestBuy ){
          maxProfit = max(maxProfit,prices[i] - bestBuy);
         }   bestBuy = min(bestBuy , prices[i]);

        }
        return maxProfit;
    }
};
