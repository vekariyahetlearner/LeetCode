class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> StoT;
        unordered_map<char,char> TtoS;
        for(int i=0; i<s.size(); i++){
            if(StoT.count(s[i]) && StoT[s[i]]!=t[i]) return false;
            if(TtoS.count(t[i]) && TtoS[t[i]]!=s[i]) return false;
            StoT[s[i]]=t[i];
            TtoS[t[i]]=s[i];      
        }
        return true;
    }
};