class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> mp;
        string test="balon";
        for(auto i: text){
            mp[i]++;
        }
        int ans=INT_MAX;
        for(auto i:test){
            int x;
            (i=='l'||i=='o')? x=mp[i]/2 : x=mp[i];
            ans=min(ans,x);
        }
        return ans==INT_MAX ? 0:ans;
    }
};