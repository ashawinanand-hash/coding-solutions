# Find Most Frequent Vowel and Consonant

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given a string `s` consisting of lowercase English letters (`'a'` to `'z'`).

Your task is to:

- Find the vowel (one of 'a', 'e', 'i', 'o', or 'u') with the maximum frequency.
- Find the consonant (all other letters excluding vowels) with the maximum frequency.

Return the sum of the two frequencies.

 **Note** : If multiple vowels or consonants have the same maximum frequency, you may choose any one of them. If there are no vowels or no consonants in the string, consider their frequency as 0.

The  **frequency**  of a letter `x` is the number of times it occurs in the string.

 

Original
C++
 **Example 1:** 

 **Input:**  s = "successes"

 **Output:**  6

 **Explanation:** 

- The vowels are: 'u' (frequency 1), 'e' (frequency 2). The maximum frequency is 2.
- The consonants are: 's' (frequency 4), 'c' (frequency 2). The maximum frequency is 4.
- The output is 2 + 4 = 6.

 **Example 2:** 

 **Input:**  s = "aeiaeia"

 **Output:**  3

 **Explanation:** 

- The vowels are: 'a' (frequency 3), 'e' (frequency 2), 'i' (frequency 2). The maximum frequency is 3.
- There are no consonants in s. Hence, maximum consonant frequency = 0.
- The output is 3 + 0 = 3.

 

 **Constraints:** 

- 1 <= s.length <= 100
- s consists of lowercase English letters only.

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 57.75%)  
**Memory:** 9.9 MB (beats 21.22%)  
**Submitted:** 2026-11-15T07:12:11.174Z  

```cpp
class Solution {
public:
    int maxFreqSum(string s) {
        map<char, int> m1;
        map<char, int> m2;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u') {
                m1[s[i]]++;
            } else {
                m2[s[i]]++;
            }
        }

        int v = 0;
        int c = 0;

        for (auto it : m1) {
            v = max(v, it.second);
        }

        for (auto it : m2) {
            c = max(c, it.second);
        }

        return v + c;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/find-most-frequent-vowel-and-consonant/)