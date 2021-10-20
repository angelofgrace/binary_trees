#include "binary_trees.h"

/**
* binary_tree_is_full - check if a binary tree is full
*
* @tree: root node of the binary tree to evaluate
*
* Return: 1 if full, 0 if absent or incomplete
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	/*
	* if a node has no children
	* or if it has both children, it is full.
	* if all nodes are full, the tree is full.
	*/
	if (root->left == NULL && root->right == NULL)
	{
		return (1);
	}

	if ((root->left) && (root->right))
	{
		return (binary_tree_is_full(root->left) && binary_tree_is_full(root->right));
	}

	/* if all branches do not catch the first if statement, it is not full */
	return (0);
}
