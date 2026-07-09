
class Solution {
public:
    bool exist(TreeNode* root, TreeNode* target){
        if(root == target) return true;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==p || root == q) return root;
        else if(exist(root->left,p) && exist(root->right,q)) return root;
        else if(!exist(root->left,p) && !exist(root->right,q)) return root;
        else if(exist(root->left,p) && !exist(root->right,q)){
            return lowestCommonAncestor(root->left,p,q);
        }
    }
        else return lowestCommonAncestor(root->right,p,q);
        if(root==NULL) return false;
        return exist(root->left,target) || exist(root->right,target);
};

