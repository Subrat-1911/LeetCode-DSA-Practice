    void helper(TreeNode* root,vector<int>& ans){
        if(root==NULL) return;  //base case
        ans.push_back(root->val); //root
        helper(root->left,ans);  //left
        helper(root->right,ans); //right

public:
class Solution {
 */
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;

