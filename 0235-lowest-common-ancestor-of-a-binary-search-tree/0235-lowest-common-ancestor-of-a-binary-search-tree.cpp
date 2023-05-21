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
        if(findNode(root->left,p) && findNode(root->left,q)) {
            return lowestCommonAncestor(root->left, p, q);
        }
        if(findNode(root->right,p) && findNode(root->right,q)) {
            return lowestCommonAncestor(root->right, p, q);
        }
        return root;
    }
    
    
    bool findNode(TreeNode* root, TreeNode* node) {
        if(root == NULL) {
            return false;
        }
        return root->val == node->val || findNode(root->left, node) || findNode(root->right, node);
    }
};