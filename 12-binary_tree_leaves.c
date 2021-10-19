#include "binary_trees.h"

/**
* binary_tree_leaves - find the number of leaf nodes in a binary tree
*
* @tree: root node of the binary tree to be measured
*
* Return: unsigned int count of leaf nodes in the tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	return (binary_tree_is_leaf(tree) + binary_tree_leaves(tree->left)
		+ binary_tree_leaves(tree-> right));
}

/**
* binary_tree_is_leaf - determine whether a node in a binary tree
* has any child nodes
*
* @node: the node to evaluate
*
* Return: 1 if leaf, 0 if absent or stem
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
        if (node == NULL)
        {
                return (0);
        }

        if (node->left == NULL && node->right == NULL)
        {
                return (1);
        }

        return (0);
}
