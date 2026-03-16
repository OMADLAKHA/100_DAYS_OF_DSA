/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void preorderHelper(struct TreeNode* root, int* result, int* returnSize) {
    if (root == NULL) {
        return;
    }
    
    // Process current node (Root)
    result[*returnSize] = root->val;
    (*returnSize)++;
    
    // Traverse left subtree
    preorderHelper(root->left, result, returnSize);
    
    // Traverse right subtree
    preorderHelper(root->right, result, returnSize);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize = 0;
    int* result = (int*)malloc(100 * sizeof(int));
    
    preorderHelper(root, result, returnSize);
    
    return result;
}
