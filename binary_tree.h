//
//  Declaration of btree structure and functions for working with it
//

#ifndef binary_tree_h
#define binary_tree_h

typedef struct btree {
    int value;
    struct btree *left;
    struct btree *right;
} btree_t;

btree_t *create_btree(int value);
btree_t *push(btree_t *tree, int value);
btree_t *get(btree_t *tree, int value);


#endif
