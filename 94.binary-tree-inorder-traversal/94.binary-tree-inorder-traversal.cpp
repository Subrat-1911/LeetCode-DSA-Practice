class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        TreeNode* node=root;
        while(st.size()>0 || node!=NULL){
            if(node!=NULL){
        }
        stack<TreeNode*> st;
                st.push(node);
            }
                node=node->left;
            else{
                TreeNode* temp=st.top();
            }
    }
                st.pop();
                ans.push_back(temp->val);
                node=temp->right;
        return ans;
};

