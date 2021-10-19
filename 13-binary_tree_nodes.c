#include "binary_trees.h"

/**
* binary_tree_is_not_leaf - determine whether a node has any child nodes
*
* @node: the node to evaluate
*
* Return: 1 if true, 0 if absent or leaf
*/
int binary_tree_is_not_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return(0);
	}

	if (node->left == NULL && node->right == NULL)
	{
		return (0);
	}

	return(1);
}

/**
* binary_tree_nodes - count all nodes with at least one child
*
* @tree: root node of the binary tree to count
*
* Return: unsigned int count of qualifying nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	return (binary_tree_is_not_leaf(tree) + binary_tree_nodes(tree->left)
		+ binary_tree_nodes(tree->right));
}

