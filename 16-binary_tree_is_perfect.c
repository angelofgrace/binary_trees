#include "binary_trees.h"

int depth(binary_tree_t *node);
bool is_perfect(const binary_tree_t *tree, int depth, int level);

/**
* binary_tree_is_perfect - check if all leaves of a binary tree
* have the same depth and all nodes are full.
*
* @tree: rood node of the binary tree to be evaluated
*
* Return: 1 if perfect, 0 if absent or imperfect
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	if (is_perfect(tree, depth((binary_tree_t *)tree), 0))
	{
		return (1);
	}
	return (0);
}

/**
* depth - find the depth of the current node
*
* @node: pointer to the node within a binary tree to evaluate
*
* Return: int count of the node's depth, 0 if absent
*/
int depth(binary_tree_t *node)
{
	int d = 0;

	while (node)
	{
		d++;
		node = node->left;
	}
	return (d);
}

/**
* is_perfect - recursively check that each level of a binary tree is perfect
*
* @tree: root node of the tree to evaluate
* @depth: depth of the current node
* @level: level of the binary tree
*
* Return: bool, true if perfect, else false
*/
bool is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (!tree)
	{
		return (true);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		/* if no children, return true if depth equals level plus one */
		return (depth == level + 1);
	}

	if (tree->left == NULL || tree->right == NULL)
	{
		/* if only one child, return false */
		return (false);
	}

	/* both children must be true to return true */
	return (is_perfect(tree->left, depth, level + 1) &&
		is_perfect(tree->right, depth, level + 1));
}
