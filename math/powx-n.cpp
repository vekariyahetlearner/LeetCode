class Solution {
public:
    double myPow(double x, int n) {
        double power=n;
        if(power<0){ x=1/x; power=-power; }
        return func(x,power);
    }
    double func(double x , long long power){
        if(power==0) return 1;
        double half= func(x,power/2);
        if(power%2==1) return half*half*x;
        else return half*half;
    }
};