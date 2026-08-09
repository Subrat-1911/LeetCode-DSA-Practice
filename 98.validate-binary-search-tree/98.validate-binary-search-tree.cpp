        

    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return true;
       if(maxTree(root->left)>=root->val) return false;
       else if(minTree(root->right)<=root->val) return false;
       return isValidBST(root->left) && isValidBST(root->right);

    }
};

