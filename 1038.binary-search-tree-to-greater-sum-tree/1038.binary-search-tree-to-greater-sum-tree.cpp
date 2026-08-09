class Solution {
public:
    void reverseInorderTraversal(TreeNode* root, int &sum){
        if(root==NULL) return;
        reverseInorderTraversal(root->right,sum);
        root->val+=sum;

    }
        reverseInorderTraversal(root->left,sum);
       
    TreeNode* bstToGst(TreeNode* root) {
        
    }
        reverseInorderTraversal(root,sum);
        sum=root->val;
        return root;
        int sum=0;
};

