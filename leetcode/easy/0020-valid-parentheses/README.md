# Valid Parentheses

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'`, determine if the input string is valid.

An input string is valid if:

- Open brackets must be closed by the same type of brackets.
- Open brackets must be closed in the correct order.
- Every close bracket has a corresponding open bracket of the same type.

 

 **Example 1:** 

 **Input:**  s = "()"

 **Output:**  true

 **Example 2:** 

 **Input:**  s = "()[]{}"

 **Output:**  true

 **Example 3:** 

 **Input:**  s = "(]"

 **Output:**  false

 **Example 4:** 

 **Input:**  s = "([])"

 **Output:**  true

 **Example 5:** 

 **Input:**  s = "([)]"

 **Output:**  false

 

 **Constraints:** 

- 1 <= s.length <= 104
- s consists of parentheses only '()[]{}'.

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 18.44%)  
**Memory:** 8.8 MB (beats 62.46%)  
**Submitted:** 2026-10-23T18:43:43.612Z  

```cpp
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (st.empty() && (s[i] == ')' || s[i] == ']' || s[i] == '}')) {
                return 0;
            } else if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else if ((st.top() == '(' && s[i] == ')') ||
                       (st.top() == '[' && s[i] == ']') ||
                       (st.top() == '{' && s[i] == '}')) {
                st.pop();
            }
            else{
                return 0;
            }
        }
        if(st.empty()){
            return 1;
        }
        else{
            return 0;
        }
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/valid-parentheses/)