class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& v, int k) {
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<v.size();i++){
            if(mp[v[i]].size()>0){
                for(auto j:mp[v[i]]){
                    if(abs(j-i)<=k) return true;
                }
            }
            mp[v[i]].push_back(i);
        }
        return false;
    }
};