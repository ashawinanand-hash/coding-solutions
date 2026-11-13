class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
     int high = 0;
     int low = 0;
     int ans = 0;
     int product = 1;
     while(high<nums.size()){
        product = product*nums[high];
        while(low<=high && product>=k){
            product /= nums[low];
            low++;
        }
        ans=ans+high-low+1;
        high++;
     }
     return ans;   
    }
};