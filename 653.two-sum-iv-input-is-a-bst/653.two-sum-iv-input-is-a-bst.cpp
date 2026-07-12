    bool findTarget(TreeNode* root, int k) {
    
public:
class Solution {
 */
    void helper(TreeNode* root,vector<int>& v){
        if(root==NULL) return;
    }
        v.push_back(root->val);
        helper(root->left,v);
        helper(root->right,v);
        vector<int>v;
        helper(root,v);

