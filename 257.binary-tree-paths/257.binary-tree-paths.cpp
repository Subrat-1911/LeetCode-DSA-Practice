class Solution {
public:
    void helper(TreeNode* root, string s, vector<string>& ans){
        string a=to_string(root->val);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        helper(root,"",ans);
        helper(root->left, s+a+"->", ans);
        helper(root->right, s+a+"->", ans);

        return ans;
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            s+=a;
        }
    }
            ans.push_back(s);
            return;
};

