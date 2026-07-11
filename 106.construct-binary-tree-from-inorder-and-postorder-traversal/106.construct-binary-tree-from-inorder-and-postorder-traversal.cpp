        }
        int lcount=i-inlo;
        int rcount=inhi-i;
        root->left=build(in,inlo,i-1,post,postlo,postlo+lcount-1);
        root->right=build(in,i+1,inhi,post,postlo+lcount,posthi-1);
            i++;
            if(in[i]==post[posthi])break;
        return root;
    }
        while(i<=inhi){
        int i=inlo;
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=inorder.size();
        return(build(inorder,0,n-1,postorder,0,n-1));
    }
        if(inlo==inhi) return root;
        TreeNode* root=new TreeNode(post[posthi]);
        if(inlo>inhi) return NULL;
    TreeNode* build(vector<int>& in, int inlo, int inhi, vector<int>& post, int postlo, int posthi){

