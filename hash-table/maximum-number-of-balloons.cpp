class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> count(26,0);
        for(auto c:text) count[c-'a']++;
        int minOcc= INT_MAX;
        minOcc= min(minOcc,count['b'-'a']);
        minOcc= min(minOcc,count['a'-'a']);
        minOcc= min(minOcc,count['l'-'a']/2);
        minOcc= min(minOcc,count['o'-'a']/2);
        minOcc= min(minOcc,count['n'-'a']);
        return minOcc;
    }
};