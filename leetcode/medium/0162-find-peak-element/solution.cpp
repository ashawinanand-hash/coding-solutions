class Solution {
public:
    int findPeakElement(vector<int>& nums) {
     int high = nums.size()-1;
     int low = 0;
     int ans = 0;
    while(low<=high){
       if(nums[low]>= nums[high]){
        if(nums[ans]<=nums[low]){
        ans = low;
        }
       }
       else{
        if(nums[ans]<=nums[high]){
        ans = high;
        }
        }
       low++;
       high--;
    }
    return ans;
    }
};