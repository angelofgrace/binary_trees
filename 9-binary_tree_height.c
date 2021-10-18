#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight;
	size_t rightHeight;	

	if (tree == NULL)
	{
		return (0);
	}

	/* compute the height of each subtree, recursively */
	leftHeight = binary_tree_height(node->left);
	rightHeight = binary_tree_height(node->right);

	/* return the larger of the two subtrees */
	if (leftHeight > rightHeight)
	{
		return (leftHeight + 1);
	}
	else
	{
		return (rightHeight + 1);
	}
 }
