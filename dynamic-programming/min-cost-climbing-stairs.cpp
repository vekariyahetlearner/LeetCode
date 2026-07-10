class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
     int n=cost.size();
     vector<int> dp(n+1,-1);
     return min(solve(n-1,cost,dp),solve(n-2,cost,dp)); 
    }
    int solve(int n,vector<int> &cost,vector<int> &dp){
        dp[0]=cost[0];
        dp[1]=cost[1];
        if(dp[n]!=-1) return dp[n];
        dp[n]=cost[n]+min(solve(n-1,cost,dp),solve(n-2,cost,dp));
        return dp[n];
    }
};