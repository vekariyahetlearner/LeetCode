class Solution {
public:
    string reorganizeString(string s) {
        int count[26]={0};
        for(auto c:s) count[c-'a']++;
        int maxCount=0; 
        char maxChar='a';
        for(int i=0;i<26;i++){
            if(count[i]>maxCount){
                maxChar='a'+i;
                maxCount=count[i];
            }
        }
        if(maxCount>((s.size()+1)/2)) return "";
        string res(s.size(),' ');
        int index=0;
        while(count[maxChar-'a']>0){
            res[index]=maxChar;
            count[maxChar-'a']--;
            index+=2;
        }
        for(int i=0;i<26;i++){
            while(count[i]>0){
                if(index>=s.size()) index=1;
                res[index]='a'+i;
                index+=2;
                count[i]--;
            }
        }
        return res;
        
    }
};