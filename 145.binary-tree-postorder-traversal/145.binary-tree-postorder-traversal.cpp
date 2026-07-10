 * };
 */
class Solution {
public:
    void helper(TreeNode* root,vector<int>& ans){
        if(root==NULL) return;
        helper(root->left,ans);
        helper(root->right,ans);

    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
    }
        ans.push_back(root->val);
        helper(root, ans);
        return ans;
};

