    }
        
        PrintNthLevel(root->right,currLevel+1,tarLevel,subans);
        PrintNthLevel(root->left,currLevel+1,tarLevel,subans);
        }
            return ;
        if(currLevel==tarLevel){
            subans.push_back(root->val);
        if(root==NULL) return;
   void PrintNthLevel(TreeNode* root, int currLevel, int tarLevel,vector<int>& subans){
    void printLevelWise(TreeNode* root,vector<vector<int>>& ans){
        int n=NoOfLevel(root);
        for(int i=1;i<=n;i++){
            PrintNthLevel(root,1,i,subans);
            
        }

    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        printLevelWise(root,ans);
            ans.push_back(subans);
            vector<int> subans;
        return ans;
    }
};

