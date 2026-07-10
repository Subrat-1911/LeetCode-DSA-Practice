        }
            PrintNthLevel(root->right,currLevel,tarLevel,subans);
            PrintNthLevel(root->left,currLevel,tarLevel,subans);
        else {
        }
            PrintNthLevel(root->left,currLevel,tarLevel,subans);
            PrintNthLevel(root->right,currLevel,tarLevel,subans);
        if(currLevel%2==0){
        }
            return ;
            subans.push_back(root->val);
        if(currLevel==tarLevel){
        if(root==NULL) return;
   void PrintNthLevel(TreeNode* root, int currLevel, int tarLevel,vector<int>& subans){
    }
        return maxLevel;
        int maxLevel=1+max(NoOfLevel(root->left),NoOfLevel(root->right));
        currLevel+=1;

