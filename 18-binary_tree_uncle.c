#include "binary_trees.h"

/**
* binary_tree_uncle - search the binary family tree for
* the uncle node of a given node
*
* @node: the (grand)child node to search from
*
* Return: pointer to the uncle node, null if nonexistent or no input
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !(node->parent) || !(node->parent)->parent)
	{
		return (NULL);
	}

	if (node->parent == ((node->parent)->parent)->right)
	{
		return (((node->parent)->parent)->left);
	}
	else
	{
		return (((node->parent)->parent)->right);
	}
}
