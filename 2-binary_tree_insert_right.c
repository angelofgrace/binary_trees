#include "binary_trees.h"

/**
* binary_tree_insert_right - insert a new node as a parent's
* right child, adjusting the tree as necessary
*
* @parent: origin linked list node
* @value: integer value to be stored in new node
*
* Return: pointer to the new right node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newRightNode;

	if (!parent)
	{
		return (NULL);
	}
	/** create a new node with value stored in it */
	newRightNode = malloc(sizeof(binary_tree_t));

	if (newRightNode)
	{
	newRightNode->n = value;
	newRightNode->parent = parent;
	/** if parent has a right-child, point new node's right pointer to it */
	if (parent->right)
	{
		(parent->right)->parent = newRightNode;
		newRightNode->right = parent->right;
	}
	else
	{
		newRightNode->right = NULL;
	}
	newRightNode->left = NULL;
	/** point parent's left pointer to new node */
	parent->right = newRightNode;
	}
	return (newRightNode);
}
