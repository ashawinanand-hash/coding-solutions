# Balanced Binary Tree

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a binary tree, determine if it is  **height-balanced**.

 

 **Example 1:** 

```
Input: root = [3,9,20,null,null,15,7]
Output: true

```

 **Example 2:** 

```
Input: root = [1,2,2,3,3,null,null,4,4]
Output: false

```

 **Example 3:** 

```
Input: root = []
Output: true

```

 

 **Constraints:** 

- The number of nodes in the tree is in the range [0, 5000].
- -104 <= Node.val <= 104

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 23.1 MB (beats 54.39%)  
**Submitted:** 2026-09-29T06:08:26.811Z  

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root) {
        if(root == nullptr)
            return 0;

        int left = height(root->left);
        int right = height(root->right);

        if(abs(left - right) > 1)
            return -1;

        if(left == -1 || right == -1)
            return -1;

        return max(left, right) + 1;
    }

    bool isBalanced(TreeNode* root) {
        return height(root) != -1;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/balanced-binary-tree/)