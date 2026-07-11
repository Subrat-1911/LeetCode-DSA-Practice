        }
        PrintNthLevel(root->left,currLevel+1,tarLevel,ans);
        PrintNthLevel(root->right,currLevel+1,tarLevel,ans);
    }
    void printLevelWise(TreeNode* root,vector<int>& ans){
        int n=ans.size();
        for(int i=0;i<n;i++){
            PrintNthLevel(root,0,i,ans);
            ans[currLevel]=root->val;
        if(currLevel==tarLevel){
        if(root==NULL) return;
    void PrintNthLevel(TreeNode* root, int currLevel, int tarLevel,vector<int>& ans){
    }
        return maxLevel;
        int maxLevel=1+max(NoOfLevel(root->left),NoOfLevel(root->right));
        if(root==NULL) return 0;
    int NoOfLevel(TreeNode* root){

