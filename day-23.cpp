//leetcode - 121(best time to buy and sell the stock)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,mini=INT_MAX,max_profit=0;
        for(int i=0;i<prices.size();i++)
        {
            if(mini>prices[i])
            {
                mini=prices[i];
            }
            profit=prices[i]-mini;
            if(profit>max_profit)
            {
                max_profit=profit;
            }
        }
        return max_profit;
    }
};
