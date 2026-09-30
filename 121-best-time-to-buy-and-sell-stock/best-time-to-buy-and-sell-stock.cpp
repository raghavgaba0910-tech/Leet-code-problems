class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int minipr = prices[0];

        for(int i : prices ){
            if (i < minipr) minipr = i;
        
            int profit =  i - minipr;
            if (profit > maxprofit) maxprofit = profit;

        }
        return maxprofit;
    }
};