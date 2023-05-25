/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int diameter(TreeNode *root,int &D)
    {
        if(!root) return 0;
        int left=diameter(root->left,D);
        int right=diameter(root->right,D);
        D=max(left+right,D);
        return max(left,right)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int D=0;
        diameter(root,D);
        return D;
    }
};