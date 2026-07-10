class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int r[256]={0};
        int m[256]={0};
        for(auto c:ransomNote) r[c]++;
        for(auto c:magazine) m[c]++;
        for(auto c:ransomNote){
            if(r[c]>m[c]) return false;
        }
        return true;
    }
};