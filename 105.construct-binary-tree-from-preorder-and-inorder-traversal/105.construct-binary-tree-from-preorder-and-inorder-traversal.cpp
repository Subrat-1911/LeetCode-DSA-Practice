        }
        int lcount=i-inlo;
        int rcount=inhi-i;
        root->left=build(pre,prelo+1,prelo+lcount,in,inlo,i-1);
        root->right=build(pre,prelo+lcount+1,prehi,in,i+1,inhi);
            i++;
            if(pre[prelo]==in[i])break;
        int i=inlo;
        while(i<=inhi){
        if(prelo==prehi) return root;
        TreeNode* root=new TreeNode(pre[prelo]);
        if(prelo>prehi) return NULL;
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    TreeNode* build(vector<int>& pre, int prelo, int prehi, vector<int>& in, int inlo, int inhi){
public:

