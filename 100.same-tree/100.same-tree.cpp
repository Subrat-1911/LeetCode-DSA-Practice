
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p->val != q->val) return false;
        bool LST = isSameTree(p->left,q->left);
        bool RST = isSameTree(p->right,q->right);
        return true;
    }
        if(!LST) return false;
        if(!RST) return false;
        if(p==NULL && q==NULL) return true;
        if(p==NULL && q!=NULL) return false;
        if(p!=NULL && q==NULL) return false;

        
        //base case
};

