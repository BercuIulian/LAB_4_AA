#include <stdio.h>
#include <stdlib.h>

// Structure for a node in the binary tree
struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Function to create a new node in the binary tree
struct TreeNode* createNode(int data) {
    struct TreeNode* newNode = malloc(sizeof(struct TreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to perform Breadth First Search on the binary tree
void bfs(struct TreeNode* root) {
    // Create a queue for BFS traversal
    struct TreeNode* queue[100];
    int front = 0, rear = 0;

    // Enqueue the root node
    queue[rear++] = root;

    while (front < rear) {
        // Dequeue a vertex from the queue and print its data
        struct TreeNode* current = queue[front++];
        printf("%d ", current->data);

        // Enqueue the left child if it exists
        if (current->left) {
            queue[rear++] = current->left;
        }

        // Enqueue the right child if it exists
        if (current->right) {
            queue[rear++] = current->right;
        }
    }
}

// Function to perform Depth First Search on the binary tree
void dfs(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }

    // Visit the current node
    printf("%d ", root->data);

    // Visit the left subtree
    dfs(root->left);

    // Visit the right subtree
    dfs(root->right);
}

int main() {
    // Unbalanced binary tree with 20 vertices

    /*struct TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->left->right->left = createNode(6);
    root->left->right->right = createNode(7);
    root->left->right->left->left = createNode(8);
    root->left->right->right->left = createNode(9);
    root->left->right->right->right = createNode(10);
    root->left->right->left->left->left = createNode(11);
    root->left->right->right->right->left = createNode(12);
    root->left->right->right->right->right = createNode(13);
    root->left->right->right->right->left->left = createNode(14);
    root->left->right->right->right->left->right = createNode(15);
    root->left->right->right->right->left->right->left = createNode(16);
    root->left->right->right->right->left->right->right = createNode(17);
    root->left->right->right->right->left->right->left->right = createNode(18);
    root->left->right->right->right->left->right->left->right->right = createNode(19);
    root->left->right->right->right->left->right->left->right->right->right = createNode(20);*/


    // Balanced binary tree with 21 vertices
    struct TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    root->left->left->left = createNode(8);
    root->left->left->right = createNode(9);
    root->left->right->left = createNode(10);
    root->left->right->right = createNode(11);
    root->right->left->left = createNode(12);
    root->right->left->right = createNode(13);
    root->right->right->left = createNode(14);
    root->right->right->right = createNode(15);
    root->left->left->right->left = createNode(16);
    root->left->right->left->right = createNode(17);
    root->right->left->left->left = createNode(18);
    root->right->left->right->right = createNode(19);
    root->left->right->left->right->left = createNode(20);
    root->right->left->left->left->right = createNode(21);

    printf("BFS traversal of the unbalanced tree: ");
    bfs(root);
    printf("\n");

    printf("DFS traversal of the unbalanced tree: ");
    dfs(root);
    printf("\n");

    return 0;
}
