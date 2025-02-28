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
    int maxDepth(TreeNode* root) {
                if(root==nullptr) return 0;
                int count=0;
        queue<TreeNode*> queue;
        queue.push(root);
        TreeNode* node;
        vector<vector<int>> ans;
        while(queue.empty()==false){
            int len=queue.size();
            vector<int> levelNodes;
            for(int i=0;i<len;i++){
                node=queue.front();queue.pop();
                levelNodes.push_back(node->val);
                if(node->left) queue.push(node->left);
                if(node->right) queue.push(node->right);
                
            }
            ans.push_back(levelNodes);
            count++;
        }
        return count;
    }
};