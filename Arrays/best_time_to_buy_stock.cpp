// Description: Solution to the "Best Time to Buy and Sell Stock" problem
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int bestbuy=prices[0];
        for(int i=1;i<prices.size();i++){
           if(prices[i]>bestbuy){
                maxprofit=max(maxprofit,prices[i]-bestbuy);
           }
           bestbuy=min(bestbuy,prices[i]);
        }
        return maxprofit;
    }
};