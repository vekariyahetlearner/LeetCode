class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        int n=nums.size();
        for(int i=0;i<(1<<n);i++){
            vector<int> v;
            int temp=i;
            for(int j=0;j<nums.size();j++){
                if(((1<<j)&temp)!=0){
                    v.push_back(nums[j]);
                }
            }
            res.push_back(v);
        }
        return res;
    }
};