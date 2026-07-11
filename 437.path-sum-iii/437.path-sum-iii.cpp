        helper(root->left,sum-(root->val),count);
        helper(root->right,sum-(root->val),count);

    }
    int pathSum(TreeNode* root, int targetSum) {
        int count=0;
        helper(root,targetSum,count);
        if(root==NULL) return 0;
        }
            count++;
        if(root->val==sum){
        if(root==NULL) return;
    void helper(TreeNode* root,long long sum, int& count){
public:
class Solution {


