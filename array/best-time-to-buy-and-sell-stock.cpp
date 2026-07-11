class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff,best=0,current=0;
        for(int i=1; i<prices.size(); i++){
            diff=prices[i]-prices[i-1];
            current=max(0,current+diff);
            best=max(best,current);
            
        }
        return best;
    }
};