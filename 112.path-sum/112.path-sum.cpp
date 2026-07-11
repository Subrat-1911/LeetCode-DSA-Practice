        }
        helper(root->left,sum-(root->val),flag);
        helper(root->right,sum-(root->val),flag);



    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int flag=0;
        helper(root,targetSum,flag);
        if(flag==1) return true;
        return false;
    }
};

