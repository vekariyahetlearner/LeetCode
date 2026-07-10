class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1,mid,flag;
        while(high>=low){
            mid=low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target) {high=mid-1; flag=mid;}
            else {low=mid+1; flag=mid+1;}
        }
        return flag;        
    }
};