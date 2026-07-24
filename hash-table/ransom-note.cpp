class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mpR;
        unordered_map<char,int> mpM;
        for(char c: ransomNote) mpR[c]++;
        for(char c: magazine) mpM[c]++;
        for(char c: ransomNote){
            if(mpR[c]>mpM[c]) return false;
        }
        return true;
    }
};