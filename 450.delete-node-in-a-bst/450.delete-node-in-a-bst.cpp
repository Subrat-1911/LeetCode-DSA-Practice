        if(root->right==NULL) return NULL;
        TreeNode* suc=root->left;
        while(suc->right!=NULL){
            suc=suc->right;
        }
        return suc;
            pred=pred->right;
        }
        return pred;
    }
    TreeNode* ios(TreeNode* root){  // to find suc
    TreeNode* iop(TreeNode* root){   // to find predi
        if(root->left==NULL) return NULL;
        TreeNode* pred=root->left;
        while(pred->right!=NULL){
class Solution {
public:

    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return NULL;

