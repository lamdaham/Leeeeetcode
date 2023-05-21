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
    int diameterOfBinaryTree(TreeNode* root) {
        int output = 0;
        helped(root, output);
        return output;
    }
    
    int helped(TreeNode* root, int &diameter) {
        if(root == NULL) {
            return -1;
        } else if(root->left == NULL && root->right == NULL) {
            return 0;
        } else {
            int l = 1 + helped(root->left, diameter);
            int r = 1 + helped(root->right, diameter);
            // cout << l << " " << r;
            if(l+r > diameter) {
                diameter = l+r;
            }
            return max(l,r);
        }
    }
};