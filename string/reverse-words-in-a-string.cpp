class Solution {
public:
    string reverseWords(string s) {
        int i= s.size()-1;
        string res="";
        while(i>=0){
            while (i >= 0 && s[i] == ' ') i--;
            if (i < 0) break;

            int end=i;
            while(i>=0 && s[i]!=' ') i--;

            if(!res.empty()) res+=' ';
            res+=s.substr(i+1, end-i);
        }
        return res;
    }
};