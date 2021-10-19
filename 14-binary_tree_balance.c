#include "binary_trees.h"

/**
* binary_tree_balance - measure the difference between the right and left
* branches of a binary tree
*
* @tree: the root node of the binary tree to be measured
*
* Return: integer measure of the binary tree's balance
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	if (binary_tree_height(tree) == 1)
	{
		if (tree->right && tree->left)
		{
			return(0);
		}
		else if (tree->left)
		{
			return(1);
		}
		else
		{
			return(-1);
		}
	}

	return((binary_tree_height(tree->left) - binary_tree_height(tree->right)));

}


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

        if (tree == NULL || (tree->left == NULL && tree->right == NULL))
        {
                return (0);
        }
        /* compute the height of each subtree, recursively */
        leftHeight = binary_tree_height(tree->left);
        rightHeight = binary_tree_height(tree->right);

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
