#include "binary_trees.h"

/**
* binary_tree_height - find the height of a binary tree
*
* @tree: pointer to the root node of the binary tree
*
* Return: unsigned integer, measure of the binary tree's height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight;
	size_t rightHeight;	

	if (tree == NULL)
	{
		return (0);
	}

	/* compute the height of each subtree, recursively */
	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	/* return the larger of the two subtrees */
	if (leftHeight > rightHeight)
	{
		return (leftHeight);
	}
	else
	{
		return (rightHeight);
	}
}
