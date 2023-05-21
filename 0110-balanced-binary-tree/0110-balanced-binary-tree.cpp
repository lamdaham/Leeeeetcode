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
    bool isBalanced(TreeNode* root) {
        if(root == NULL) {
            return true;
        } else if (root->left == NULL && root->right == NULL) {
            return true;
        } else {
            return (abs(height(root->left) - height(root->right)) <= 1 && isBalanced(root->right) && isBalanced(root->left));
        }
    }
    
    int height(TreeNode* root) {
        if(root == NULL) {
            return 0;
        } else if (root->left == NULL && root->right == NULL) {
            return 1;
        } else {
            return max(1+height(root->left), 1+height(root->right));
        }
    }
};