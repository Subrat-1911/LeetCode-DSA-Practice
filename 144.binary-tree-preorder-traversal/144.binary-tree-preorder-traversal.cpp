    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
    void helper(TreeNode* root,vector<int>& ans){
        if(root==NULL) return;
    }
        helper(root->left,ans);

        helper(root->right,ans);
        ans.push_back(root->val);
        helper(root, ans);
        return ans;

        
    }
};

