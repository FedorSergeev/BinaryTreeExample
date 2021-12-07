//
//  Simple project for binary tree demonstration.
//  Mostly made as an excercise for my fingers:)
//

#include <stdio.h>
#include <assert.h>
#include "binary_tree.h"

/**
 * Create a simple binary tree, put a few elements and look up for one
 */
int main(int argc, const char * argv[]) {
    
    printf("Creating the binary tree\n");
    btree_t *tree = create_btree(8);
    push(tree, 3);
    push(tree, 10);
    push(tree, 1);
    push(tree, 6);
    push(tree,14);
    push(tree, 4);
    push(tree, 7);
    push(tree, 13);
    
    btree_t *result = get(tree, 13);
    
    assert(result != NULL);
    assert(result->left == NULL);
    assert(result->right == NULL);
    return 0;
}
