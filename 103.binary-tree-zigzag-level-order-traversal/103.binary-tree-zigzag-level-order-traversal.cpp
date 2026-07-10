        }
            PrintNthLevel(root->right,currLevel+1,tarLevel,subans);
            PrintNthLevel(root->left,currLevel+1,tarLevel,subans);
        else {
        
    }
    void printLevelWise(TreeNode* root,vector<vector<int>>& ans){
        int n=NoOfLevel(root);
        }
            PrintNthLevel(root->left,currLevel+1,tarLevel,subans);
        if(tarLevel%2==0){
            PrintNthLevel(root->right,currLevel+1,tarLevel,subans);
        for(int i=1;i<=n;i++){
            vector<int> subans;
            PrintNthLevel(root,1,i,subans);
        if(currLevel==tarLevel){
            subans.push_back(root->val);
            return ;
        }

        if(root==NULL) return;
   void PrintNthLevel(TreeNode* root, int currLevel, int tarLevel,vector<int>& subans){
    }
        return maxLevel;
        int maxLevel=1+max(NoOfLevel(root->left),NoOfLevel(root->right));
        if(root==NULL) return 0;
            ans.push_back(subans);

