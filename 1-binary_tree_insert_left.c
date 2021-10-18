#include "binary_trees.h"

/**
* binary_tree_insert_left - insert a new node as a parent's
* left child, adjusting the tree as necessary
*
* @parent: origin linked list node
* @value: integer value to be stored in new node
*
* Return: pointer to the new left node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/** create a new node with value stored in it */
	binary_tree_t *newLeftNode = malloc(sizeof(binary_tree_t));
	if (newLeftNode)
	{
	newLeftNode->n = value;
	newLeftNode->parent = parent;
	/** if parent has a left-child, point new node's left pointer to it */
	if (parent->left)
	{
		(parent->left)->parent = newLeftNode;
		newLeftNode->left = parent->left;
	}
	else
	{
		newLeftNode->left = NULL;
	}
	newLeftNode->right = NULL;
	/** point parent's left pointer to new node */
	parent->left = newLeftNode;
	}
	return newLeftNode;
}
