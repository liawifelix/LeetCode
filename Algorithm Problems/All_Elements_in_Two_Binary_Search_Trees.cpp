//All Elements in Two Binary Search Trees
//Date 5 Sept 2020
//Source https://leetcode.com/problems/all-elements-in-two-binary-search-trees/

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
    void helper(TreeNode* node, vector<int> &res){
        if(!node)
            return;
        if(node->left){
            helper(node->left, res);
        }
        if(node->right){
            helper(node->right, res);
        }
        res.push_back(node->val);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> res;
        helper(root1, res);
        helper(root2, res);
        sort(res.begin(), res.end());
        return res;
    }
};
