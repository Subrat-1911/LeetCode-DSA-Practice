            }
                TreeNode* r=curr->right;
                curr->right=curr->left;
                //find pred
                TreeNode* pred=curr->left;
                while(pred->right!=NULL) pred=pred->right;
                //link
                pred->right=r;
                curr=curr->left;
            else curr=curr->right;
        }
        TreeNode* temp=root;
        while(temp!=NULL){
            temp->left=NULL;
            temp=temp->right;
        }
    }
};

