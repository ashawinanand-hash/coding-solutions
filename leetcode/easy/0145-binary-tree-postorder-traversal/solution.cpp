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
vector<int> postorder(TreeNode* root,vector<int>&ans){
    if (root==nullptr)
    return ans;

    postorder(root->left,ans);
    postorder(root->right,ans);
    ans.push_back(root->val);

    return ans;
}

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
    vector<int>ans;
    return postorder(root,ans);  
    }
};