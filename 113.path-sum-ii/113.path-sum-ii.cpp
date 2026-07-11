        }
        helper(root->left,v,ans,sum-(root->val));
        helper(root->right,v,ans,sum-(root->val));

        v.push_back(root->val);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> v;
        helper(root,v,ans,targetSum);
    }
        return ans;
};

