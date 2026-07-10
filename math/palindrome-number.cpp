class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        int q; long int rev=0;
        q=x;
        while(q>0){
            
            rev=(rev*10)+(q%10);
            q/=10;
        }
        if(rev==x){
            return true;
        }
        return false;
        
    }
};