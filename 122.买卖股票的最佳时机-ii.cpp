/*
 * @lc app=leetcode.cn id=122 lang=cpp
 *
 * [122] 买卖股票的最佳时机 II
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit;
        int buyingPrice;
        
        profit = 0;
        buyingPrice = prices[0];
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] < buyingPrice)
            {
                buyingPrice = prices[i];
            }
            else                                                               // 只要股价上涨就卖出
            {
                profit += prices[i] - buyingPrice;
                buyingPrice = prices[i];
            }
        }

        return profit;
    }
};
// @lc code=end

