class Solution {
public:
    string convert(string s, int numRows) {
       if(numRows==1) return s;
       vector<string> v(numRows);
       bool goingDown=false;
       int currRow=0;
       for(auto c:s){
        v[currRow].push_back(c);
        if(currRow==0||currRow==numRows-1) goingDown=!goingDown;
        currRow+= goingDown?1:-1;
       }
       string result="";
       for(auto &s:v) result+=s;
       return result;

    }
};