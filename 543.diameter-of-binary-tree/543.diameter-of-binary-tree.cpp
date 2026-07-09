
class Solution {
public:
    int NoOfLevel(TreeNode* root){
        if(root==NULL) return 0;
        int maxLevel=1+max(NoOfLevel(root->left),NoOfLevel(root->right));
        return maxLevel;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        maxDia=max(maxDia,Dia);
    }
        if(root==NULL) return 0;
        int Dia = NoOfLevel(root->left) + NoOfLevel(root->right);
    int maxDia=0;
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        return maxDia;
};

