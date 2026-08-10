
        }
        else if(root->val<key){ //go right
            root->right=deleteNode(root->right,key);

        }
        else{ //go left
            root->left=deleteNode(root->left,key);
        }
        return root;
            }
                root->left=deleteNode(root->left,pred->val);  // now target is pred->val and it placed in left of 
                //delete, for delete use same function
                root->val=pred->val;  // replace
                TreeNode* pred=iop(root);
                root

