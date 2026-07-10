class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        unordered_set<int> HashSet(nums.begin(),nums.end());
        int longestStreak=0;
        for(auto n:HashSet){
            if(!HashSet.count(n-1)){
                int currNum=n;
                int currStreak=1;
                while(HashSet.count(currNum+1)){
                    currStreak++;
                    currNum++;
                }
                longestStreak=max(longestStreak,currStreak);
            }
        }
        return longestStreak;
    }
};