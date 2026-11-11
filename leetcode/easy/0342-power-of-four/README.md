# Power of Four

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer `n`, return  *`true` if it is a power of four. Otherwise, return `false`*.

An integer `n` is a power of four, if there exists an integer `x` such that `n == 4x`.

 

Original
C++
 **Example 1:** 

```
Input: n = 16
Output: true

```

 **Example 2:** 

```
Input: n = 5
Output: false

```

 **Example 3:** 

```
Input: n = 1
Output: true

```

 

 **Constraints:** 

- -231 <= n <= 231 - 1

 

 **Follow up:**  Could you solve it without loops/recursion?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8 MB (beats 10.02%)  
**Submitted:** 2026-11-11T13:55:48.548Z  

```cpp
class Solution {
public:
    bool isPowerOfFour(int n) {
        int low = 0;
        int high = n;
        int mid;
        if(n<=0){
            return false;
        }
        while(low<=high){
        mid = (low+high)/2;
        
        if(pow(4,mid) == n){
            return true;
        }
        else if(pow(4,mid) > n){
           high = mid-1;

        }
        else{
          low = mid+1;
        }
        }
        return false;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/power-of-four/)