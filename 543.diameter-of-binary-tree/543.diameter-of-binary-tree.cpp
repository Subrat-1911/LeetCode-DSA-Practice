    }
    void helper(TreeNode* root, int& maxDia){

        if(root==NULL) return;
        int Dia = NoOfLevel(root->left) + NoOfLevel(root->right);    
        maxDia=max(maxDia,Dia);
        helper(root->left,maxDia); 
        helper(root->right,maxDia);
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxDia=0;
        helper(root,maxDia);
        return maxLevel;
        int maxLevel=1+max(NoOfLevel(root->left),NoOfLevel(root->right));
        if(root==NULL) return 0;
    int NoOfLevel(TreeNode* root){
    int maxDia=0;
public:
class Solution {

