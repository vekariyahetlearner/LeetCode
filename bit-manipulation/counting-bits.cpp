class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        int temp,count;
        for(int i=0;i<=n;i++){
            temp=i;count=0;
            while(temp){
                temp&=temp-1;
                count++;
            }
            v.push_back(count);
        }
        return v;
    }
};