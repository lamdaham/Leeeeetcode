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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL) {
            return vector<vector<int>>(0);
        }
        vector<vector<int>> output(1);
        helper(root, output, 0);
        return output;
    }
    
    
    void helper(TreeNode* root, vector<vector<int>> &out, int level) {
        if(root == NULL) {
            return;
        } else {
            if(out.size() - 1 < level) {
                vector<int> temp;
                temp.push_back(root->val);
                out.push_back(temp);
            } else {
                out[level].push_back(root->val);
            }
            helper(root->left, out, level+1);
            helper(root->right, out, level+1);
        }
    }
};