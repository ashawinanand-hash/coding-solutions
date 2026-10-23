class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double count = 0;

        for(int i = 0; i < k; i++){
            count += nums[i];
        }

        double max = count;

        for(int i = k; i < nums.size(); i++){
            count = count - nums[i-k] + nums[i];

            if(count > max){
                max = count;
            }
        }

        return max/k;
    }
};