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
    
    int counter = 0;
    
    int kthSmallest(TreeNode* root, int k) {
        vector<int> vec;
        inOrder(root,vec,k);
        return vec[k-1];
    }
    
    void inOrder(TreeNode* root, vector<int> &vec, int k) {
        if(root == NULL) {
            return;
        }
        
        inOrder(root->left, vec, k);
        if(vec.size() == k) {
            return;
        }
        vec.push_back(root->val);
        inOrder(root->right, vec, k);
    }
};