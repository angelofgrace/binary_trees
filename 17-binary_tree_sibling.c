#include "binary_trees.h"


/**
* binary_tree_sibling - find the sibling of a binary tree node
*
* @node: child node of which to idenfity the sibling
*
* Return: pointer to the sibling node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !(node->parent))
	{
		return (NULL);
	}

	if (node == (node->parent)->right)
		return ((node->parent)->left);
	else
		return ((node->parent)->right);
}
