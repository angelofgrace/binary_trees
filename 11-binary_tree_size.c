#include "binary_trees.h"

/**
* binary_tree_size - function to recursively find number of nodes
* in a binary tree
*
* @tree: root node of the binary tree to be measured
*
* Return: unsigned integer count of nodes
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
