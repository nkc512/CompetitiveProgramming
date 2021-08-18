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
    int count=0;
    void printInorder(TreeNode* root, int maxv)
    {
        if (root==nullptr)
            return;

        int currvalue=root->val;
        if(maxv<=currvalue)
        {
            count=count+1;
            maxv=currvalue;
        }
        printInorder(root->left,maxv);
        printInorder(root->right,maxv);
    }
    int goodNodes(TreeNode* root) {
        printInorder(root,-100000);
        return count;
    }
};