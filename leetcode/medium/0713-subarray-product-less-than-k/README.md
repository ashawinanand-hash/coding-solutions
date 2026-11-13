# Subarray Product Less Than K

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an array of integers `nums` and an integer `k`.

Return the number of contiguous subarrays where the  **product**  of all the elements in the  **subarray**  is  **strictly less**  than `k`.

 

Original
C++
 **Example 1:** 

```
Input: nums = [10,5,2,6], k = 100
Output: 8
Explanation: The 8 subarrays that have product less than 100 are:
[10], [5], [2], [6], [10, 5], [5, 2], [2, 6], [5, 2, 6]
Note that [10, 5, 2] is not included as the product of 100 is not strictly less than k.

```

 **Example 2:** 

```
Input: nums = [1,2,3], k = 0
Output: 0

```

 

 **Constraints:** 

- 1 <= nums.length <= 3 * 104
- 1 <= nums[i] <= 1000
- 0 <= k <= 106

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 45 MB (beats 12.97%)  
**Submitted:** 2026-11-13T06:38:44.767Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/subarray-product-less-than-k/)