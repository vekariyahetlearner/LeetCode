class Solution {
public:
    bool isSubsequence(string s, string t) {
        int x=0;
        char sChecker=s[x];
        string extra="";
        for(char c:t){
            if(sChecker==c){
                extra.push_back(c);
                sChecker=s[++x];
            }
        }
        if(extra==s) return true;
        else return false;
    }
};