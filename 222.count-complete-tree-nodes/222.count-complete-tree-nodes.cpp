 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root, int &count){
        if(root==NULL) return;
    }
        inorder(root->left,count);
        count++;

        inorder(root->right,count);
    int countNodes(TreeNode* root) {
        inorder(root,count);
    }
        return count;
        int count=0;
};

