//
//  Implementation of binary tree functions
//

#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"

/**
 * Create binary tree node
 */
btree_t *create_btree(int value) {
    btree_t *tree = malloc(sizeof(btree_t));
    tree->left = NULL;
    tree->right = NULL;
    tree->value = value;
    return tree;
}

/**
 * Add new element to binary tree structure
 */
btree_t *push(btree_t *tree, int value) {
    if (!tree) {
        printf("Adding new tree node with value = %d\n", value);
        tree = create_btree(value);
    }
    else if (!tree->value) {
        tree->value = value;
    }
    else if (tree->value > value) {
        tree->left = push(tree->left, value);
    }
    else if (tree->value < value) {
        tree->right = push(tree->right, value);
    }
    return tree;
}

/**
 * Get tree node by value
 */
btree_t *get(btree_t *tree, int value) {
    while(tree != NULL) {
        if (tree->value == value) {
            return tree;
        }
        if (value < tree->value) {
            return get(tree->left, value);
        } else if (value > tree->value) {
            return get(tree->right, value);
        }
    }
    return NULL;
}
