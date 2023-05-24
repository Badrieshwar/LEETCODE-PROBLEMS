/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //TreeNode* ans;
        while(root)
        {
            if(root->left!=NULL && p->val<root->val && q->val<root->val) root=root->left;
            else if(root->right!=NULL && p->val>root->val && q->val>root->val) root=root->right;
            else break;
        }
        return root;
    }
};