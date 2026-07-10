class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> v(n,0);
        vector<int> diff(n+2,0);
        diff[0]=0;
        for(int i=0;i<bookings.size();i++){           
            diff[bookings[i][0]-1]+=bookings[i][2];
            diff[bookings[i][1]]-=bookings[i][2];
        }
        v[0]=diff[0];
        for(int i=1;i<n;i++){
            v[i]=v[i-1]+diff[i];
        }
        return v;
    }
};