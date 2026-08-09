
        return min(root->val,min(minTree(root->left),minTree(root->right)));
        
    }
    bool isValidBST(TreeNode* root) {
       if(maxTree(root->left)>root->val) return false;
       else if(minTree(root->right)<root->val) return false;
       return isValidBST(root->left) && isValidBST(root->right);

    }
        if(root==NULL) return true;
};

