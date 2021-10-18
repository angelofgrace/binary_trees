#include "binary_trees.h"

/**
* binary_tree_preorder - traverse a binary tree recursively
* in preorder fashion, from leftmost child to root
*
* @tree: root of tree to traverse
* @*func: pointer to function to execute on value stored in each node
*
* Return: void, when root is reached
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	/* execute func on current node data */
	func(tree->n);

	/* recur on left subtree */
	binary_tree_preorder(tree->left, func);

	/* recur on right subtree */
	binary_tree_preorder(tree->right, func);
}
