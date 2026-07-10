class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int profit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<buy){
                buy=prices[i];  
                continue;
            } 
            if(prices[i]-buy>0){
                profit=max(prices[i]-buy,profit);
            }
        }
        return profit;
    }
};