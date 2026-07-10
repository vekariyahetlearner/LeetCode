class Solution {
public:
    string reverseWords(string s) {
        string result="";
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            string word="";
            while(i<s.size() && s[i]==' ') i++;
            while(i<s.size() && s[i]!=' '){
                word.push_back(s[i++]);
            }
            reverse(word.begin(),word.end());
            result+=" " + word;
            word="";
        }
        if(result[result.size()-1]==' ') return result.substr(1,result.size()-2);
        return result.substr(1);
        
    }
};