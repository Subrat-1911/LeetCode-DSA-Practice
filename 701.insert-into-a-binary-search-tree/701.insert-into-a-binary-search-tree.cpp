            }
        }
        else if(root->val>val){
            if(root->left != NULL){
                insertIntoBST(root->left,val);
                return root;
            }
            else{
                TreeNode *l= new TreeNode(val);
                root->left=l;
                return root;
                root->right=r;
                TreeNode *r= new TreeNode(val);
            else{
            }
                insertIntoBST(root->right,val);

