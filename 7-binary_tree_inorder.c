#include "binary_trees.h"

/**
* binary_tree_inorder - traverse a binary tree in inorder fashion
*
* @tree: root node of the tree to traverse
* @func: function to execute on the value within each node
*
* Return: none
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	/* recur on left child */
	binary_tree_inorder(tree->left, func);

	/* execute func on node data */
	func(tree->n);

	/* recur on right child */
	binary_tree_inorder(tree->right, func);
}
