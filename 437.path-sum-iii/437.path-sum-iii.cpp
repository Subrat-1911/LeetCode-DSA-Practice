        helper(root->left,sum-(root->val),count);
        helper(root->right,sum-(root->val),count);

    }
    int pathSum(TreeNode* root, int targetSum) {
        int count=0;
        helper(root,targetSum,count);
        count+=(pathSum(root->left,targetSum)+pathSum(root->right,targetSum));
        return count;
        
    }
        if(root==NULL) return 0;
};

