    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        TreeNode* node=root;
        stack<TreeNode*> st;
        while(st.size()>0 || node!=NULL){
            if(node!=NULL){
                st.push(node);
                node=node->left;
            }
            else{
                TreeNode* temp=st.top();
                st.pop();
                ans.push_back(temp->val);
                node=temp->right;
            }
        }
        return ans;
    }
};
public:
class Solution {

