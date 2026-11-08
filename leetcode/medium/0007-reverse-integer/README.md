# Reverse Integer

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a signed 32-bit integer `x`, return `x` *with its digits reversed*. If reversing `x` causes the value to go outside the signed 32-bit integer range `[-231, 231 - 1]`, then return `0`.

 **Assume the environment does not allow you to store 64-bit integers (signed or unsigned).** 

 

 **Example 1:** 

```
Input: x = 123
Output: 321

```

 **Example 2:** 

```
Input: x = -123
Output: -321

```

 **Example 3:** 

```
Input: x = 120
Output: 21

```

 

 **Constraints:** 

- -231 <= x <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 1 ms  
**Memory:** 7.7 MB  
**Submitted:** 2026-11-08T08:50:08.822Z  

```cpp
class Solution {
public:
    int reverse(int x) {
      double ans = 0;
      if(x<0){
         while(x){
        int c = x%10;
        ans = (ans*10) + c;
        x = x/10;
      }
      return ans;
      }
      while(x){
        int c = x%10;
        ans = (ans*10) + c;
        x = x/10;
      }
      return ans;  
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-integer/)