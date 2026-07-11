public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*>st;
        while(st.size()>0){
        
        if(root!=NULL)st.push(root);
            TreeNode* temp = st.top();
        }
    }
            st.pop();
            ans.push_back(temp->val);
            if(temp->right) st.push(temp->right);
            if(temp->left) st.push(temp->left);

        return ans;
};

