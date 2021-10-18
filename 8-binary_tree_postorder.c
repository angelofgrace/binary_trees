#include "binary_trees.h"

/**
* binary_tree_postorder - traverse a binary tree in postorder fashion,
* across bottom leaves up left, then right main branches
*
* @tree: root node of the tree to be traversed
* @func: function to be executed on data within each node
*
* Return: none
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	/* recur on left child */
	binary_tree_postorder(tree->left, func);

	/* recur on right child */
	binary_tree_postorder(tree->right, func);

	/* execute function on present node data */
	func(tree->n);
}
