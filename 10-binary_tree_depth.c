#include "binary_trees.h"

/**
* binary_tree_depth - find the depth of a node in a binary tree
*
* @tree: pointer to the node of the binary tree
*
* Return: unsigned integer, measure of the depth of a node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i;
	binary_tree_t *tmpNode;

	if (tree == NULL)
	{
		return (0);
	}

	tmpNode = (binary_tree_t *)tree;
	i = 0;

	while (tmpNode->parent != NULL)
	{
		tmpNode = tmpNode->parent;
		i++;
	}

	return (i);
}
