# ifndef BINARY_TREES
# define BINARY_TREES

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/** Task 0 - create a new binary tree node **/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/** Task 1 - create a new node as a left child **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/** Task 2 - create a new node as a right child **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/** Task 3 - delete a binary tree **/
void binary_tree_delete(binary_tree_t *tree);

/** Task 4 - find whether a node is a leaf **/
int binary_tree_is_leaf(const binary_tree_t *node);

/** Task 5 - find whether a node is a root **/
int binary_tree_is_root(const binary_tree_t *node);

/** Task 6 - traverse a binary tree in preorder fashion **/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/** Task 7 - traverse a binary tree in inorder fashion **/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/** Task 8 - traverse a binary tree in postorder fashion **/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/** Task 9 - find the height of a binary tree **/
size_t binary_tree_height(const binary_tree_t *tree);

/** Task 10 - find the depth of a binary tree node **/
size_t binary_tree_depth(const binary_tree_t *tree);

/** Task 11 - find the size of a binary tree **/
size_t binary_tree_size(const binary_tree_t *tree);

/** Task 12 - find the number of leaf nodes in a binary tree **/
size_t binary_tree_leaves(const binary_tree_t *tree);

/** Task 13 - find the number of non-leaf nodes in a binary tree **/
size_t binary_tree_nodes(const binary_tree_t *tree);

/** Task 14 - find the balance factor of a binary tree **/
int binary_tree_balance(const binary_tree_t *tree);

/** Resource code print binary tree to terminal **/
void binary_tree_print(const binary_tree_t *tree);


#endif
