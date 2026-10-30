# 3Sum Closest

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array `nums` of length `n` and an integer `target`.

Find three integers at  **distinct indices**  in `nums` such that the sum is  **closest**  to `target`.

Return the sum of the three integers.

You may assume that each input would have  **exactly**  one solution.

 

 **Example 1:** 

```
Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).

```

 **Example 2:** 

```
Input: nums = [0,0,0], target = 1
Output: 0
Explanation: The sum that is closest to the target is 0. (0 + 0 + 0 = 0).

```

 

 **Constraints:** 

- 3 <= nums.length <= 500
- -1000 <= nums[i] <= 1000
- -104 <= target <= 104

## Solution

**Language:** C++  
**Runtime:** 14 ms (beats 37.23%)  
**Memory:** 13.9 MB (beats 81.93%)  
**Submitted:** 2026-10-30T18:52:32.567Z  

```cpp
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        int ans = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < nums.size() - 2; i++) {

            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k) {

                int sum = nums[i] + nums[j] + nums[k];

                if (abs(target - sum) < abs(target - ans)) {
                    ans = sum;
                }

                if (sum == target) {
                    return sum;
                } else if (sum > target) {
                    k--;
                } else {
                    j++;
                }
            }
        }

        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/3sum-closest/)