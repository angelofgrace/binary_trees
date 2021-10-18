#include "binary_trees.h"

/**
* binary_tree_delete - recursively delete child trees
* to delete a whole binary tree
*
* @tree: origin node of tree to be deleted
*
* Return: Always NULL once tree has been deleted
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	/* delete both subtrees of input node */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/* delete the node */
	free(tree);	
}
