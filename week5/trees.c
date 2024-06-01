#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Definition of the tree node structure
typedef struct node {
    int data;
    struct node *left;
    struct node *right;
} node;

// Function to search for a given number in a binary search tree
bool search(node *tree, int number) {
    // Base case: tree is empty or number is found
    if (tree == NULL) {
        return false; // Number is not found
    }
    if (tree->data == number) {
        return true; // Number is found
    }

    // Recur down the tree
    if (number < tree->data) {
        return search(tree->left, number); // Search in the left subtree
    } else {
        return search(tree->right, number); // Search in the right subtree
    }
}

// Helper function to create a new node
node* newNode(int data) {
    node *temp = (node *)malloc(sizeof(node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

// Helper function to insert a new node with given key in BST
node* insert(node* node, int data) {
    // If the tree is empty, return a new node
    if (node == NULL) return newNode(data);

    // Otherwise, recur down the tree
    if (data < node->data) {
        node->left = insert(node->left, data);
    } else if (data > node->data) {
        node->right = insert(node->right, data);
    }

    // Return the (unchanged) node pointer
    return node;
}

// Main function to test the search function
int main() {
    // Creating a sample binary search tree
    node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    // Searching for some numbers in the tree
    int numbers[] = {40, 90, 20, 60, 10};
    for (int i = 0; i < 5; i++) {
        if (search(root, numbers[i])) {
            printf("%d is found in the tree.\n", numbers[i]);
        } else {
            printf("%d is not found in the tree.\n", numbers[i]);
        }
    }

    return 0;
}
