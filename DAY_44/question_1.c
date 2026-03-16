#include <stdio.h>
#include <stdlib.h>

// Binary Tree Node Structure
struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Create a new tree node
struct TreeNode* createNode(int val) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Preorder Traversal: Root -> Left -> Right
void preorder(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->val);
    preorder(root->left);
    preorder(root->right);
}

// Inorder Traversal: Left -> Root -> Right
void inorder(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    printf("%d ", root->val);
    inorder(root->right);
}

// Postorder Traversal: Left -> Right -> Root
void postorder(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->val);
}

// Main function to demonstrate all three traversals
int main() {
    // Creating a sample binary tree:
    //        1
    //       / \\
    //      2   3
    //     / \\   \\
    //    4   5   6
    
    struct TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->right = createNode(6);
    
    printf("Preorder Traversal:  ");
    preorder(root);
    printf("\\n");
    
    printf("Inorder Traversal:   ");
    inorder(root);
    printf("\\n");
    
    printf("Postorder Traversal: ");
    postorder(root);
    printf("\\n");
    
    return 0;
}
