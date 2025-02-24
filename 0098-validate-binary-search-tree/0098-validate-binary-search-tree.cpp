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
       TreeNode*prev=nullptr;  // Pointer to store the previous node in inorder traversal
    bool check=true; // Boolean flag to check if tree is a valid binary searh tree

    void inorder(TreeNode* root) //perfirming binary search tree inorder traversal
    {
        if(root==nullptr)
        return;
        inorder(root->left);
        if(prev!=nullptr && prev->val >= root->val){  //checking if it voilates inorder tree traversal
        check=false;
        return;
        }
        prev=root;                //assiging the value 
        inorder(root->right);
    }
    bool isValidBST(TreeNode* root) {
        inorder(root);
        return check;   //return true if it's valid binary search tree
    }
};