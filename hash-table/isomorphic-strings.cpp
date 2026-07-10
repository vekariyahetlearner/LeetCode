class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        int arrS[256]={0};
        int arrT[256]={0};
        for(int i=0;i<s.size();i++){
            char chS=s[i];
            char chT=t[i];
            if(arrS[chS]!=arrT[chT]) return false;
            int v=i+1;
            arrS[chS]=v; arrT[chT]=v;
        }
        return true;
    }
};